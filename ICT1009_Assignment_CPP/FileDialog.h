#include <windows.h>
#include <string>
#include <shlobj.h>
#include <iostream>
#include <sstream>

std::string BrowseFolder()
{
	TCHAR path[MAX_PATH];

	BROWSEINFO bi = { 0 };
	bi.lpszTitle = ("Please select the folder path...");
	bi.ulFlags = BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE;

	LPITEMIDLIST pidl = SHBrowseForFolder(&bi);

	if (pidl != 0)
	{
		//get the name of the folder and put it in path
		SHGetPathFromIDList(pidl, path);

		//free memory used
		IMalloc * imalloc = 0;
		if (SUCCEEDED(SHGetMalloc(&imalloc)))
		{
			imalloc->Free(pidl);
			imalloc->Release();
		}

		return path;
	}

	return "";
}

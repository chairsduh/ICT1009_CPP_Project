#include "FileDialog.h"
#include <string>

int main(int argc, const char *argv[])
{
	std::string path = BrowseFolder();
	std::cout << path << std::endl;
	return 0;
}
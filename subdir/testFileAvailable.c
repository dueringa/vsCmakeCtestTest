#include <Windows.h>

int main()
{
	DWORD attrib = GetFileAttributes("testfile.txt");
	// return code 0 == success.
	return (attrib == INVALID_FILE_ATTRIBUTES);
}
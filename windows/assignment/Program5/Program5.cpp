#include<tchar.h>
#include<Windows.h>
#include<stdio.h>
#include<string>
#define BUFFSIZE 100
int _tmain(int argc, LPCSTR argv[])
{
	HANDLE hfile;
	CHAR buffer[BUFFSIZE];
	if (argc != 2)
	{
		_tprintf(_T("Usage fileopen.exe <name of the file>\n"));
		getchar();
		return FALSE;
	}
	hfile = CreateFile(argv[1], GENERIC_ALL, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hfile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("\nfile doesnot exist.Error (%d)"), GetLastError());
		getchar();
		return FALSE;
	}
	_tprintf(_T("\nFile (%s) opened successfully\n"), argv[1]);
	CHAR *read = "pranitha";
	DWORD no_of_bytes = 0;
	if (0 == WriteFile(hfile, read, strlen(read), &no_of_bytes, NULL))
	{
		_tprintf(_T("\nUnsucessful write---Error (%d)"), GetLastError());
	}
	DWORD nbr;
	ZeroMemory(buffer, BUFFSIZE);
	int lDistance = 0;
	DWORD dwPtr = SetFilePointer(hfile,
		lDistance,
		NULL,
		FILE_BEGIN);
	//HANDLE hfile1;
	//hfile1 = CreateFile(argv[1], GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	BOOL ret = ReadFile(hfile, buffer, BUFFSIZE, &nbr, NULL);
	if (ret == 0)
	{
		_tprintf(_T("\nCannot read file.Error(%d)\n"), GetLastError());
		getchar();
		return FALSE;
	}
	_tprintf(_T("\nText from (%s) %s\n"), argv[1], buffer);
	CloseHandle(hfile);
	//CloseHandle(hfile1);
	getchar();
	return TRUE;
}

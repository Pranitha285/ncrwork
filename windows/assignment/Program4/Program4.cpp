#include<tchar.h>
#include<Windows.h>
#include<stdio.h>
#include<string>
#define BUFFSIZE 100
int _tmain(int argc, LPCSTR argv[])
{
	HANDLE hfile;
	TCHAR buffer[BUFFSIZE];
	if (argc != 2)
	{
		_tprintf(_T("Usage fileopen.exe <name of the file>\n"));
		getchar();
		return FALSE;
	}
	hfile = CreateFile(argv[1], GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hfile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("\nfile doesnot exist.Error (%d)"), GetLastError());
		getchar();
		return FALSE;
	}
	_tprintf(_T("\nFile (%s) opened successfully\n"), argv[1]);
	DWORD nbr;
	ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = ReadFile(hfile, buffer, BUFFSIZE, &nbr, NULL);
	if (ret == 0)
	{
		_tprintf(_T("\nCannot read file.Error(%d)\n"), GetLastError());
		getchar();
		return FALSE;
	}
	CloseHandle(hfile);
	_tprintf(_T("\nText from (%s) %s\n"), argv[1], buffer);
	getchar();
	return TRUE;
}
#include <windows.h>
#include <stdio.h>
#include <shellapi.h>
int main(int argc, LPWSTR *szArglist)
{
	int i;
	szArglist = CommandLineToArgvW(GetCommandLineW(), &argc);
	if (NULL == szArglist)
	{
		wprintf(L"CommandLineToArgvW failed\n");
		return 0;
	}
	else for (i = 0; i<argc; i++) printf("%d: %ws\n", i, szArglist[i]);
	// Free memory allocated for CommandLineToArgvW arguments.
	LocalFree(szArglist);
	getchar();
	return(1);
}
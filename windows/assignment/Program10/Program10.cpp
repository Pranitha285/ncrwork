#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
int main(int argc, LPWSTR argv[])
{
	argv = CommandLineToArgvW(GetCommandLineW(), &argc);
	if (NULL == argv)
	{
		wprintf(L"CommandLineToArgvW failed\n");
		return 0;
	}
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	HANDLE hEvent;
	HANDLE hProcess;
	_SECURITY_ATTRIBUTES lpSecurityAttributes;
	lpSecurityAttributes.nLength = sizeof(lpSecurityAttributes);
	lpSecurityAttributes.lpSecurityDescriptor = NULL;
	lpSecurityAttributes.bInheritHandle = TRUE;
	hEvent = CreateEvent(&lpSecurityAttributes, FALSE, FALSE, TEXT("namedevent"));
	if (hEvent == NULL)
	{
		printf("Event creation error (%d)\n", GetLastError());
		return FALSE;
	}
	printf("Event created whose handle can be inherited\n");
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	BOOL x = CreateProcess(NULL, argv[1], &lpSecurityAttributes, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);
	CloseHandle(hEvent);
	getchar();
	return 0;
}
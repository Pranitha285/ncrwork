#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include <atlbase.h>
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
	HANDLE hProcess;
	HANDLE hThread;

	DWORD dwProcessId = 0;
	DWORD dwThreadId = 0;

	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	BOOL x1 = CreateProcess(NULL,argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

	if (x1 == NULL)
	{
		printf("Creating child process failed. Error(%d)\n", GetLastError());
		return FALSE;
	}

	printf("Process created successfully\n");
	printf("Process ID of child process (%S)= %d\n", argv[1], pi.dwProcessId);
	printf("Thread ID of child process (%S)= %d\n", argv[1], pi.dwThreadId);
	printf("GetCurrentProcessId() = %d\n", GetCurrentProcessId());
	printf("GetCurrentThreadId() = %d\n", GetCurrentThreadId());
	printf("GetProcessId(pi.hProcess) = %d\n", GetProcessId(pi.hProcess));
	printf("GetThreadId(pi.hThread) = %d\n", GetThreadId(pi.hThread));
	printf("GetProcessIdOfThread(pi.hThread) = %d\n", GetProcessIdOfThread(pi.hThread));

	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	getchar();
	return 0;
}
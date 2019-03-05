#include<Windows.h>
#include<stdio.h>
int main()
{
	HANDLE h_event;
	h_event = CreateEvent(NULL, FALSE, FALSE, TEXT("namedevent"));
	CloseHandle(h_event);
	getchar();
	return 0;
}
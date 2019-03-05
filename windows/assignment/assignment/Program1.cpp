#include<iostream>
#include<windows.h>
int main()
{
	WCHAR wide_char_array[] = L"ab";
	CHAR ansci_array[] = "eree";
	if (0 != IsTextUnicode(wide_char_array, wcslen(wide_char_array) * sizeof(WCHAR), NULL))
		printf("\n%S is the unicode string", wide_char_array);
	else
		printf("\nnot a unicode");
	WCHAR *result = NULL;
	int array_size = MultiByteToWideChar(CP_UTF8, 0, ansci_array, -1, result, 0);
	if (array_size > 0)
	{
		result = new WCHAR[array_size];
		if (MultiByteToWideChar(CP_UTF8, 0, ansci_array, -1, result, array_size))
			printf("\n%S is the converted wide char array", result);
		else
			printf("\n Not calculated ---error is %d", GetLastError());
	}
	else
		printf("\nSize not calculated");
	CHAR *multi_byte = NULL;
	int buff_size = WideCharToMultiByte(CP_UTF8, 0, result, -1, multi_byte, 0, NULL, NULL);
	multi_byte = new CHAR[buff_size];
	if (0 == WideCharToMultiByte(CP_UTF8, 0, result, -1, multi_byte, buff_size, NULL, NULL))
		printf("\nNot converted");
	else
		printf("\n%s is the multibyte string", multi_byte);
	system("pause");
}
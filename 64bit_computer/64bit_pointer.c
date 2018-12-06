/*++++++++++++++++++++++++++++++++++++++++++++++++++
            2018년 12월 06일
	  시스템프로그래밍 에러확인예제

	  64비트 프로그래밍의 이해.
	  64비트란 포인터의 크기를 의미하고, 포인터가
	  나타낼수있는 수의 표현범위가 메모리의 크기가
	  된다.
	  32->64비트로 간다는것은 포인터의 범위가 확장된
	  것이며, 표현할수있는 메모리의 전체크기가 증가된
	  것이다.
+++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int _tmain(void)
{
	HANDLE HFILE =
		CreateFile(
			_T("ABC3.DAT"), GENERIC_READ, FILE_SHARE_READ,
			NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL,
			NULL);

	_tprintf(_T("error code: %d \n"), GetLastError());

	HFILE =
		CreateFile(
			_T("ABC2.DAT"), GENERIC_WRITE, FILE_SHARE_READ,
			NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL,
			NULL);

	_tprintf(_T("error code: %d \n"), GetLastError());

	return 0;
}
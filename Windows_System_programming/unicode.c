/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	   2018년 12월 05일  윈도우 시스템 프로그래밍 실습
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
핵심요약, 유니코드와 멀티바이트케릭터셋을 모두  지원하는 프로그램을
만들려면 유니코드와 _유니코드 매크로를 사용해야한다.
또한 매크로에서 정의하는 함수들로 프로그램을 작성해야. 전처리기를
통해 코드가 변환된다.
UNICODE 와 _UNICODE  케릭터셋에 대한 _t 정의는  tchar.h 헤더파일에
있다.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



#undef UNICODE
#undef _UNICODE  // 학습을위해 이미 정의된 유니코드를 해제한다.

#define UNICODE
#define _UNICODE  // MBCS WBCS 사용을위한 정의

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int _tmain(int argc, TCHAR* argv[])
{
	//LPCTSTR str1 = _T("MBCS OR WBCS 1");
	LPTSTR str1 = _T("MBCS OR WBCS 1");
	TCHAR str2[] = _T("MBCS or WBCS 2");
	TCHAR str3[100];
	TCHAR str4[50];


	LPCTSTR pStr = str1;

	_tprintf(_T("string size: %d \n"), sizeof(str2));
	_tprintf(_T("string length: %d \n"), _tcslen(pStr));

	_fputts(_T("Input String 1 : "), stdout);
	_tscanf(_T("%s"), str3);
	_fputts(_T("Input String 2 : "), stdout);
	_tscanf(_T("%s"), str4);

	_tcscat(str3, str4);
	_tprintf(_T("String1 + String2 : %s \n"), str3);

	return 0;

}
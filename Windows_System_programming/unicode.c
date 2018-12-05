/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	   2018�� 12�� 05��  ������ �ý��� ���α׷��� �ǽ�
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
�ٽɿ��, �����ڵ�� ��Ƽ����Ʈ�ɸ��ͼ��� ���  �����ϴ� ���α׷���
������� �����ڵ�� _�����ڵ� ��ũ�θ� ����ؾ��Ѵ�.
���� ��ũ�ο��� �����ϴ� �Լ���� ���α׷��� �ۼ��ؾ�. ��ó���⸦
���� �ڵ尡 ��ȯ�ȴ�.
UNICODE �� _UNICODE  �ɸ��ͼ¿� ���� _t ���Ǵ�  tchar.h ������Ͽ�
�ִ�.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



#undef UNICODE
#undef _UNICODE  // �н������� �̹� ���ǵ� �����ڵ带 �����Ѵ�.

#define UNICODE
#define _UNICODE  // MBCS WBCS ��������� ����

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
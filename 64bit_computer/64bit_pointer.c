/*++++++++++++++++++++++++++++++++++++++++++++++++++
            2018�� 12�� 06��
	  �ý������α׷��� ����Ȯ�ο���

	  64��Ʈ ���α׷����� ����.
	  64��Ʈ�� �������� ũ�⸦ �ǹ��ϰ�, �����Ͱ�
	  ��Ÿ�����ִ� ���� ǥ�������� �޸��� ũ�Ⱑ
	  �ȴ�.
	  32->64��Ʈ�� ���ٴ°��� �������� ������ Ȯ���
	  ���̸�, ǥ���Ҽ��ִ� �޸��� ��üũ�Ⱑ ������
	  ���̴�.
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
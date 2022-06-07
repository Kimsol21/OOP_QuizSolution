#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

namespace CstringFunctionMENU 
{
	enum { STRLEN=1, STRCAT, STRCPY, STRCMP, EXIT };
}

int UsingStrlenFunction(const char* m_string); //Strlen�Լ��� �̿��� ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�.
void UsingStrcatFunction(char* m_string); //Strcat�Լ��� �̿��� ���� ���ڿ��� �ڿ� ���ڿ��� �Է¹޾� �����̴� �Լ�.
void UsingStrcpyFunction(char* m_string); //Strcpy�Լ��� �̿��� ���� ���ڿ��� ���������� ������ ����ϴ� �Լ�.
bool UsingStrcmpFunction(const char* m_string); //Strcmp�Լ��� �̿��� ���ڿ��� ������ ���Ͽ� ������ 1, �ٸ��� 0�� ����ϴ� �Լ�.

int main()
{
	int myChoice;
	char myString[50];

	while (1)
	{
		cout << "���ڿ��� �Է��ϼ��� : ";
		cin >> myString;
		cout << "1. strlen�Լ� ����" << endl << "2. strcat�Լ� ����" << endl << "3. strcpy�Լ� ����" << endl << "4. strcmp�Լ� ����" << endl << "5. ���α׷� ����" << endl;
		cin >> myChoice;		
		switch (myChoice)
		{
		case(CstringFunctionMENU::STRLEN):
			//strlen �Լ� ����.
			cout << "���ڿ��� ���̴� " << UsingStrlenFunction(myString) << " �Դϴ�." << endl;
			break;

		case(CstringFunctionMENU::STRCAT):
			//strcat �Լ� ����.
			UsingStrcatFunction(myString);
			cout << "���ڿ��� ������ ��� " << myString<< " �Դϴ�." << endl;
			break;

		case(CstringFunctionMENU::STRCPY):
			//strcpy �Լ� ����.
			UsingStrcpyFunction(myString);
			cout << "���ڿ� ���� ��� " << myString<< " �Դϴ�." << endl;
			break;

		case(CstringFunctionMENU::STRCMP):
			//strcmp �Լ� ����.
			cout << ( UsingStrcmpFunction(myString) ? "�ٸ� ���ڿ��Դϴ�." : "���� ���ڿ��Դϴ�." ) <<endl; //�켱���� �̽��� ��ȣ �ʿ�.
			break;

		case(CstringFunctionMENU::EXIT):
			//���α׷� ����.
			return 0;

		default:
			cout << "[ERROR] �ùٸ� �޴��� �Է��ϼ���." << endl;
			break;
		}
	}

	return 0;
}

int UsingStrlenFunction(const char* m_string)
{
	return strlen(m_string);
}

void UsingStrcatFunction(char* m_string)
{
	char tempString[50];
	cout << "������ ���ڿ��� �Է��ϼ��� : ";
	cin >> tempString;
	strcat_s(m_string,50, tempString);
}

void UsingStrcpyFunction(char* m_string)
{
	char tempString[50];
	cout << "������ ���ڿ��� �Է��ϼ��� : ";
	cin >> tempString;
	strcpy_s(m_string, 50, tempString);
}

bool UsingStrcmpFunction(const char* m_string)
{
	char tempString[50];
	cout << "���� ���ڿ��� �Է��ϼ��� : ";
	cin >> tempString;
	return strcmp(tempString, m_string);
}

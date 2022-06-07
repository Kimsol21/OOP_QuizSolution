#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

namespace CstringFunctionMENU 
{
	enum { STRLEN=1, STRCAT, STRCPY, STRCMP, EXIT };
}

int UsingStrlenFunction(const char* m_string); //Strlen함수를 이용해 문자열의 길이를 반환하는 함수.
void UsingStrcatFunction(char* m_string); //Strcat함수를 이용해 기존 문자열의 뒤에 문자열을 입력받아 덧붙이는 함수.
void UsingStrcpyFunction(char* m_string); //Strcpy함수를 이용해 기존 문자열을 지역변수에 저장해 출력하는 함수.
bool UsingStrcmpFunction(const char* m_string); //Strcmp함수를 이용해 문자열이 같은지 비교하여 같으면 1, 다르면 0을 출력하는 함수.

int main()
{
	int myChoice;
	char myString[50];

	while (1)
	{
		cout << "문자열을 입력하세요 : ";
		cin >> myString;
		cout << "1. strlen함수 실행" << endl << "2. strcat함수 실행" << endl << "3. strcpy함수 실행" << endl << "4. strcmp함수 실행" << endl << "5. 프로그램 종료" << endl;
		cin >> myChoice;		
		switch (myChoice)
		{
		case(CstringFunctionMENU::STRLEN):
			//strlen 함수 실행.
			cout << "문자열의 길이는 " << UsingStrlenFunction(myString) << " 입니다." << endl;
			break;

		case(CstringFunctionMENU::STRCAT):
			//strcat 함수 실행.
			UsingStrcatFunction(myString);
			cout << "문자열을 덧붙인 결과 " << myString<< " 입니다." << endl;
			break;

		case(CstringFunctionMENU::STRCPY):
			//strcpy 함수 실행.
			UsingStrcpyFunction(myString);
			cout << "문자열 복사 결과 " << myString<< " 입니다." << endl;
			break;

		case(CstringFunctionMENU::STRCMP):
			//strcmp 함수 실행.
			cout << ( UsingStrcmpFunction(myString) ? "다른 문자열입니다." : "같은 문자열입니다." ) <<endl; //우선순위 이슈로 괄호 필요.
			break;

		case(CstringFunctionMENU::EXIT):
			//프로그램 종료.
			return 0;

		default:
			cout << "[ERROR] 올바른 메뉴를 입력하세요." << endl;
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
	cout << "덧붙일 문자열을 입력하세요 : ";
	cin >> tempString;
	strcat_s(m_string,50, tempString);
}

void UsingStrcpyFunction(char* m_string)
{
	char tempString[50];
	cout << "복사할 문자열을 입력하세요 : ";
	cin >> tempString;
	strcpy_s(m_string, 50, tempString);
}

bool UsingStrcmpFunction(const char* m_string)
{
	char tempString[50];
	cout << "비교할 문자열을 입력하세요 : ";
	cin >> tempString;
	return strcmp(tempString, m_string);
}

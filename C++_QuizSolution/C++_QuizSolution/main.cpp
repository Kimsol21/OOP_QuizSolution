#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2);

int main()
{
	//임의의 두 점 선언.
	Point* pointPtr1 = new Point;
	*pointPtr1 = { 1,2 };

	Point* pointPtr2 = new Point;
	*pointPtr2 = { 3,4 };

	Point& result = PntAdder(*pointPtr1, *pointPtr2);// 두 점의 값 더하기.
	cout << result.xpos << endl << result.ypos << endl; //결과 출력.

	delete pointPtr1, pointPtr2, & result;//할당된 메모리 공간은 철저히 소멸해주기!!

	return 0;
}

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pptr = new Point; //문제에서 Point관련 변수의 선언은 무조건 new 연산자를 이용해야 한다고 했으므로!!
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr;
}

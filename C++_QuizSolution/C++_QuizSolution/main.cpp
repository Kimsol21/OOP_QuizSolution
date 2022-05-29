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
	*pointPtr1 = { 5,2 };

	Point* pointPtr2 = new Point;
	*pointPtr2 = { 8,9 };

	Point result = PntAdder(*pointPtr1, *pointPtr2);// 두 점의 값 더하기.
	cout << result.xpos << endl << result.ypos << endl; //결과 출력.

	return 0;
}

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point pnt = { p1.xpos + p2.xpos, p1.ypos + p2.ypos };
	return pnt;
}

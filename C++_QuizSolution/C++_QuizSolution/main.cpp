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
	//������ �� �� ����.
	Point* pointPtr1 = new Point;
	*pointPtr1 = { 5,2 };

	Point* pointPtr2 = new Point;
	*pointPtr2 = { 8,9 };

	Point result = PntAdder(*pointPtr1, *pointPtr2);// �� ���� �� ���ϱ�.
	cout << result.xpos << endl << result.ypos << endl; //��� ���.

	return 0;
}

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point pnt = { p1.xpos + p2.xpos, p1.ypos + p2.ypos };
	return pnt;
}

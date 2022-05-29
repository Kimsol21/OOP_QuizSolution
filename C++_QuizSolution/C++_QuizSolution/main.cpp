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
	*pointPtr1 = { 1,2 };

	Point* pointPtr2 = new Point;
	*pointPtr2 = { 3,4 };

	Point& result = PntAdder(*pointPtr1, *pointPtr2);// �� ���� �� ���ϱ�.
	cout << result.xpos << endl << result.ypos << endl; //��� ���.

	delete pointPtr1, pointPtr2, & result;//�Ҵ�� �޸� ������ ö���� �Ҹ����ֱ�!!

	return 0;
}

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pptr = new Point; //�������� Point���� ������ ������ ������ new �����ڸ� �̿��ؾ� �Ѵٰ� �����Ƿ�!!
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr;
}

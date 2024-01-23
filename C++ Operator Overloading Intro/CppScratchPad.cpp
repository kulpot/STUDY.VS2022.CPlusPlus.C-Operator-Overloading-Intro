#include <iostream>
using std::cout;
using std::endl;

// ---------------------- C++ Operator Overloading Intro -------------------------------
//ref link:https://www.youtube.com/watch?v=IfdakFjYxEg&list=PLRwVmtr-pp077ESC0tAC331LxLaDa5A57

struct Vector		// algebra/trigonometry knowledge required
{
	int x;
	int y;
};

void main()
{
	Vector v1;
	v1.x = 2; v1.y = 3;
	Vector v2;
	v2.x = 1; v2.y = 4;
	Vector result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	cout << result.x << " " << result.y << endl;
}

//int add(int left, int right)
//{
//	return																											left + right;
//}
//
//void main()
//{
//	int first = 43;
//	int second = 4398;
//	//int result = first + second;
//	int result = +(first, second);		// only works in C++
//	int result2 = add(first, second);
//	cout << result << endl;
//	cout << result2 << endl;
//}
#include <iostream>
using std::cout;
using std::endl;

// ---------------------- C++ Operator Overloading Intro -------------------------------
//ref link:https://www.youtube.com/watch?v=IfdakFjYxEg&list=PLRwVmtr-pp077ESC0tAC331LxLaDa5A57

int add(int left, int right)
{
	return																											left + right;
}

void main()
{
	int first = 43;
	int second = 4398;
	int result = first + second;
	int result2 = add(first, second);
	cout << result << endl;
	cout << result2 << endl;
}
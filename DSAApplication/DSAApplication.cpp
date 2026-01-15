// DSAApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void fun2(int a);
void fun(int a)
{
  static int count = 0;
	if (a > 0)
	{
		cout << "Function called with value:fun1 " << a << endl;
		fun2(a - 1);
		cout << "Function return with value:fun1 " << a << endl;

	}
}
void fun2(int a)
{
	if (a > 0)
	{
		cout << "Function called with value:fun2 " << a << endl;
		fun(a/2);
		cout << "Function return with value:fun2 " << a << endl;
	}
}
int main()
{
	int a=100;
	fun(a);
	cout << "Value of x: " ;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

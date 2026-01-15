// DSAApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int x = 0;
void fun(int a)
{
  static int count = 0;
	if (a > 0)
	{
		x++;
		count++;
		cout << "Function called with value: " << a << endl;
	cout << "count value: " << count << endl;
		fun(a - 1);
	}
}
int main()
{
	x++;
	int a=10;
	fun(a);
	cout << "Value of x: " << x << endl;
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

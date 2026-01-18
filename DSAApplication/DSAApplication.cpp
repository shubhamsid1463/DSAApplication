// DSAApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SumOfNnaturalNumber.h"
#include "Factorial.h"
#include "PowerFunction.h"
using namespace std;


int fun(int a)
{
	if (a > 100)
	{
		return a - 10;
	}
	else
	{
		return fun(fun(a + 11));
	}
}
int main()
{
	int a=5;
	SumOfNnaturalNumber s;
	Factorial f;
	PowerFunction p;
	cout << "Sum of first " << a << " natural numbers is: " << s.Recursivesum(a) << endl;
	cout << "Sum of first " << a << " natural numbers is: " << s.Iterativesum(a) << endl;
	cout << "Sum of first " << a << " natural numbers is: " << s.Formulasum(a) << endl;
	cout << "Factorail of " << a << " is: " << f.Iterativefactorial(a) << endl;
	cout << "Factorail of " << a << " is: " << f.Recursivefactorial(a) << endl;
	cout << "Value of x: " << fun(a) << endl;
	cout << "Power 5  of 13 using recursive : " << p.Recursivepower(13,a) << endl;
	cout << "Power 5  of 13 using Optimizedrecursive : " << p.OptimizedRecursivepower(13,a) << endl;
	cout << "Power 5  of 13 using Iterative : " << p.Iterativepower(13,a) << endl;
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

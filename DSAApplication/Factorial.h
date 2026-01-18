#pragma once
class Factorial
{
public:
	int Recursivefactorial(int n)
	{
		if (n <= 1)
			return 1;
		else
			return n * Recursivefactorial(n - 1);
	};
	int Iterativefactorial(int n)
	{
		int fact = 1;
		for (int i = 2; i <= n; i++)
		{
			fact *= i;
		}
		return fact;
	};
};


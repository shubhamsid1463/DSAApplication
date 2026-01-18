#pragma once
class SumOfNnaturalNumber
{
public:
	int Recursivesum(int n)
	{
		if (n == 0)
			return 0;
		else
			return n + Recursivesum(n - 1);
	};
	 int Iterativesum(int n)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		return sum;
	};
	int Formulasum(int n)
	{
		return n * (n + 1) / 2;
	};

};

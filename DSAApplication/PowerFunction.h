#pragma once
class PowerFunction
{
public:
	int Recursivepower(int base, int exponent)
	{
		if (exponent == 0)
			return 1;
		else
			return base * Recursivepower(base, exponent - 1);
	};
	int OptimizedRecursivepower(int base, int exponent)
	{
		if (exponent == 0)
			return 1;
		else if (exponent % 2 == 0)
		{
			return OptimizedRecursivepower(base * base, exponent / 2);
			
		}
		else
		{
			return base * OptimizedRecursivepower(base, exponent - 1);
		}
	};
	int Iterativepower(int base, int exponent)
	{
		int result = 1;
		for (int i = 0; i < exponent; i++)
		{
			result *= base;
		}
		return result;
	};
};


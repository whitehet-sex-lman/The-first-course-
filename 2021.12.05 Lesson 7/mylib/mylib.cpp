#include"myLib.h"
#include<iostream>

int counter = 0;

long long three_n_plus_one(long long x)
{
	if (x == 1)
	{
		return counter;
	}
	else
	{
		if (x % 2 == 0)
		{
			++counter;
			return three_n_plus_one(x / 2);
		}
		else
		{
			++counter;
			return three_n_plus_one(3 * x + 1);
		}
	}
}

void circle(int R=0)
{
	for (int i = 0; i < 2 * R + 1; ++i)
	{
		for (int j = 0; j < 2 * R + 1; ++j)
		{
			if ((abs(((i - R) * (i - R) + (j - R) * (j - R)) - R * R) <= 5) && (abs(((i - R) * (i - R) + (j - R) * (j - R)) - R * R) >= 1))
			{
				std::cout << "* ";
			}
			else
			{
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}
}
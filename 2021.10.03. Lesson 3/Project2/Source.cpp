#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 2;
	int y = 2;
	cin >> n;
	if (n > 0)
	{
		for (int i = 1; i < n;i++)
		{
			y = y * x;
		}
		cout << y;
	}
	if (n == 0)
	{
		y = 1;
		cout << y;
	}
	if (n < 0)
	{
		for (int i = -10; i < n;i++)
		{
			y = y * x;
		}
		cout << "1/" << y;
	}
	return EXIT_SUCCESS;

}
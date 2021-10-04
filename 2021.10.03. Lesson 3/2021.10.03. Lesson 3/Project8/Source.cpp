#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n;i++)
	{
		int y = 0;
		cin >> y;
		if (y > 0)
		{
			sum = sum + y;
		}
	}
	cout << sum;
	return EXIT_SUCCESS;
}
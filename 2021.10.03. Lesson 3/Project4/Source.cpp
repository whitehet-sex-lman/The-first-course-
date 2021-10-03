#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int C = 0;
	int i = 0;
	cin >> n >> k;
	if (k < n / 2)
	{
		k = n - k;
		C = 1;
	}
	for (i = k + 1; i <= n; i++)
	{
		C *= i;
	}
	for (i = 2; i <= n - k; i++)
	{
		C /= i;
	}
	cout << C;
	return EXIT_SUCCESS;
}

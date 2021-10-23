#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a[100] = { 0 };
	int N = 0;
	int sum = 0;
	int product = 1;
	int n = 0;
	int max1 = 0;
	int max2 = 0;
	cin >> N;
	int min = a[1];
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}
	cout << "ARRAY: ";

	for (int i = 0; i < N;++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "EVEN: ";

	for (int i = 0; i < N;++i)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	for (int i = 0; i < N;++i)
	{
		sum += a[i];
	}
	cout << "SUM: " << sum << endl;
	int f = 0;

	for (int i = 0; i < N;++i)
	{
		if (a[i] < 0)
		{
			f = 1;
			product = product * a[i];
		}
	}
	if (f == 1)
	{
		cout << "PRODUCT OF NEGATIVE: " << product << endl;
	}
	else
	{
		cout << "PRODUCT OF NEGATIVE: " << endl;
	}
	for (int i = 0;i < N;++i)
	{
		if (min > a[i])
		{
			min = a[i];
			n = i;
		}
	}
	cout << "FIRST MIN INDEX: " << n << endl;
	for (int i = 0;i < N;++i)
	{
		if (max1 < a[i])
		{
			max2 = max1;
			max1 = a[i];
		}
	}
	cout << "SECOND MAX: " << max2 << endl;
	cout << "REVERSE: ";

	for (int i = N - 1; i >= 0;i--)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "ODD INDEXES: ";
	for (int i = 0;i < N;++i)
	{
		if (i % 2 != 0)
		{
			cout << a[i] << " ";
		}
	}
	return EXIT_SUCCESS;
}
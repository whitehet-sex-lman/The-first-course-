#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a[10000] = { 0 };
	int k = 0;
	int m = 0;
	int d = 0;
	int n = 0;
	cin >> k;
	for (int i = 0; i < k;++i)
	{
			cin >> n >> m;
			d = 19 * m + (n + 239) * (n + 366) / 2;
		a[i] = d;
	}
	for (int i = 0; i < k;++i)
	{
		if (a[i] != 0)
		{
			cout << a[i] << endl;
		}
	}

	return EXIT_SUCCESS;
}
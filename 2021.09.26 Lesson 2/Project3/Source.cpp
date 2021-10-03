#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	int t = 0;
	cin >> n >> k >> m;
	if (k == 0 || n == 0 || m == 0)
	{
		cout << 0;
	}
	else if (n <= k)
	{
		cout << m * 2;
	}
	else if (n > k && n % k != 0)
	{
		t = n / k + 1;
		cout << t * 2 * m;
	}
	else
	{
		t = n / k;
		cout << t * 2 * m;
	}
	return EXIT_SUCCESS;
}
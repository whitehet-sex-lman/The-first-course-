#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	int t = 0;
	cin >> n>>k>>m;
	while (n>0)
	{
		t = t + (2 * m);
		if (n - k >= k)
		{
			n = n - k;
		}
		else
			if (n - k == 0)
			{
				break;
			}
		else
		{
			t = t + (m * 2);
			break;
		}
	}
	cout << t;

	return EXIT_SUCCESS;
}
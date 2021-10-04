#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int t = 1;
	int t1 = 1;
	while (t <= n && t1 <= n)
	{
		for (int i = 0; i < t; i++)
		{
			cout << t1 << " ";
			t1 += 1;
			if (t1 > n)
			{
				break;
			}
		}
		cout << endl;
		t += 1;
	}
	return EXIT_SUCCESS;
}

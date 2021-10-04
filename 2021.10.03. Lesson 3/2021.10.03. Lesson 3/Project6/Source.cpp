#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int p = 0;
	int n = 0;
	int z = 0;
	int t = 0;
	cin >> t;
	for (int i = 0; i < t;i++)
	{
		int y = 0;
		cin >> y;
		if (y > 0)
		{
			p += 1;
		}
		else if (y < 0)
		{
			n += 1;
		}
		else
		{
			z += 1;
		}
	}
	cout << p << " " << n << " " << z;
	return EXIT_SUCCESS;
}
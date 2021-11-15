#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int mx = max(a, b);
	for (int i = mx;i <= a * b;i += mx)
	{
		if ((i % a == 0) && (i % b == 0))
		{
			cout << i;
			return EXIT_SUCCESS;
		}
	}
	return EXIT_SUCCESS;
}
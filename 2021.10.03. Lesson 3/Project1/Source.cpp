#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int t = 1;
	cin >> n;
	while (n > 0)
	{
		t = t * n;
		n = n - 1;
	}
	if (n < 0)
	{
		cout << "undefined";
	}
	else
	{
		cout << t;
	}
	return EXIT_SUCCESS;
}
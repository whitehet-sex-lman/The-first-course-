#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	cin >> x;
	int x2 = x * x;
	cout << (x2 + 1) * (x2 + x) + 1;

	return EXIT_SUCCESS;
}

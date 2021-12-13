#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int it = 0;
	cin >> it;
	int n1 = it / 100;
	it %= 100;
	int n2 = it / 10;
	it %= 10;
	int n3 = it;
	cout << n1 + n2 + n3;

	return EXIT_SUCCESS;
}

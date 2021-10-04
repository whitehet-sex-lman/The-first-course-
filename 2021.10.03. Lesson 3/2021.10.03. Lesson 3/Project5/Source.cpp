#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;
	for (int i = 1;a;i++)
	{
		if (a % i == 0)
		{
			cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}
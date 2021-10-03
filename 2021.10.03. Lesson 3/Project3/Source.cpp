#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 5;
	for (int i = 5; i <= 9; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			cout << i << " ";
			k--;
			cout << "\n";
		}
	}

	cin.get();
	return EXIT_SUCCESS;
}

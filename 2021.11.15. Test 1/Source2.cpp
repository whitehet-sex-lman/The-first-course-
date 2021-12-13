#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream fin("input.txt");
	int h = 0;
	int max = 0;
	int min = 0;
	fin >> min >> max;
	for (int i = 3; fin >> h;i++)
	{
		if ((h < min) && (i % 2 != 0))
		{
			min = h;
		}
		if ((h > max) && (i % 2 == 0))
		{
			max = h;
		}
	}
	cout << min + max << endl;
	fin.close();

	return EXIT_SUCCESS;
}
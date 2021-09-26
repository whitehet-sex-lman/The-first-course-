#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int x1 = 0;
	int y1 = 0;
	cin >> x >> y >> x1 >> y1;
	int sx = x - x1;
	int sy = y - y1;
	if (sx < 0)
	{
		sx = -sx;
	}
	if (sy < 0)
	{
		sy = -sy;
	}
	if (x == x1 || y == y1 || sx == sy)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}

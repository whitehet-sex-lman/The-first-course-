#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;
	int s1 = 0;
	int s2 = 0;
	cin >> h1 >> h2 >> m1 >> m2 >> s1 >> s2;
	s1 = h1 * 60 * 60 + m1 * 60 + s1;
	s2 = h2 * 60 * 60 + m2 * 60 + s2;
	cout << s2 - s1;
	return EXIT_SUCCESS;
}
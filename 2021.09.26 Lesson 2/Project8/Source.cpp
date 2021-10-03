#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	int x = 0;
	int y = 0;
	x = max(c, b);
	y = min(c, b);
	c = x;
	b = y;
	x = max(c, a);
	y = min(c, a);
	c = x;
	a = y;
	if (c < a + b) {
		if (c * c == a * a + b * b) {
			cout << "right";
		}
		else if (c * c < a * a + b * b) {
			cout << "acute";
		}
		else {
			cout << "obtuse";
		}
	}
	else {
		cout << "impossible";
	}
	return EXIT_SUCCESS;
}
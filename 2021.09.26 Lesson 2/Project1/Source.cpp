#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Rus");
	int n = 0;
	cin >> n;
	int m = n / 100;
	int d = n / 10 % 10;
	int k = n % 10;
	switch (m) 
	{
	case 1:
		cout << "ńňî ";
		break;
	case 2:
		cout << "äâĺńňč ";
		break;
	case 3:
		cout << "ňđčńňŕ ";
		break;
	case 4:
		cout << "÷ĺňűđĺńňŕ ";
		break;
	case 5:
		cout << "ď˙ňüńîň ";
		break;
	case 6:
		cout << "řĺńňüńîň ";
		break;
	case 7:
		cout << "ńĺěüńîň ";
		break;
	case 8:
		cout << "âîńĺěüńîň ";
		break;
	case 9:
		cout << "äĺâ˙ňüńîň ";
		break;
	}
	if (10 <= (n % 100) && (n % 100) <= 19)
	{
		switch (k)
		{
		case 0:
			cout << "äĺń˙ňü áŕíŕíîâ";
			break;
		case 1:
			cout << "îäčíŕäöŕňü áŕíŕíîâ";
			break;
		case 2:
			cout << "äâĺíŕäöŕňü áŕíŕíîâ";
			break;
		case 3:
			cout << "ňđčíŕäöŕňü áŕíŕíîâ";
			break;
		case 4:
			cout << "÷ĺňűđíŕäöŕňü áŕíŕíîâ";
			break;
		case 5:
			cout << "ď˙ňíŕäöŕňü áŕíŕíîâ";
			break;
		case 6:
			cout << "řĺńňíŕäöŕňü áŕíŕíîâ";
			break;
		case 7:
			cout << "ńĺěíŕäöŕňü áŕíŕíîâ";
			break;
		case 8:
			cout << "âîńĺěíŕäöŕňü áŕíŕíîâ";
			break;
		case 9:
			cout << "äĺâ˙ňíŕäöŕňü áŕíŕíîâ";
			break;
		}
	}
	else
	{
		switch (d)
		{
		case 0:
			break;
		case 1:
			cout << "äâŕäöŕňü ";
			break;
		case 2:
			cout << "ňđčäöŕňü ";
			break;
		case 3:
			cout << "ńîđîę ";
			break;
		case 4:
			cout << "ď˙ňüäĺń˙ň ";
			break;
		case 5:
			cout << "řĺńňüäĺń˙ň ";
			break;
		case 6:
			cout << "ńĺěüäĺń˙ň ";
			break;
		case 7:
			cout << "âîńĺěüäĺń˙ň ";
			break;
		case 8:
			cout << "äĺâ˙íîńňî ";
			break;
		}
		switch (u)
		{
		case 0:
			cout << "áŕíŕíîâ";
			break;
		case 1:
			cout << "îäčí áŕíŕí";
			break;
		case 2:
			cout << "äâŕ áŕíŕíŕ";
			break;
		case 3:
			cout << "ňđč áŕíŕíŕ";
			break;
		case 4:
			cout << "÷ĺňűđĺ áŕíŕíŕ";
			break;
		case 5:
			cout << "ď˙ňü áŕíŕíîâ";
			break;
		case 6:
			cout << "řĺńňü áŕíŕíîâ";
			break;
		case 7:
			cout << "ńĺěü áŕíŕíîâ";
			break;
		case 8:
			cout << "âîńĺěü áŕíŕíîâ";
			break;
		case 9:
			cout << "äĺâ˙ňü áŕíŕíîâ";
			break;
		}
	}
	return EXIT_SUCCESS;
}

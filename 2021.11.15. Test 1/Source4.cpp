#include <iostream>
using namespace std;
main(int argc, char* argv[])
{
	int arr[1000] = { 0 };
	int N = 0;
	int  i = 0;
	int min = 0;
	int max = 0;
	cin >> N >> arr[0];
	max = arr[0];
	min = arr[0];
	for (i = 1;i < N;i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (i = 0;i < N;i++)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
		cout << arr[i] << ' ';
	}
	return EXIT_SUCCESS;
}
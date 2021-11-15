#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int N = 0;
    int M = 0;
    cin >> N >> M;
    int data[1000001]{ 0 };
    for (int i = 0; i < N; i++)
    {
        int x = 0;
        scanf_s("%d", &x);
        data[x] = 1;
    }
    for (int i = 0; i < M; i++)
    {
        int x = 0;
        scanf_s("%d", &x);
        if (data[x] == 1)
        {
            data[x] = 2;
        }
    }
    for (int i = 0; i < 1000001; i++)
    {
        if (data[i] == 2)
        {
            printf("%d ", i);
        }
    }
    return EXIT_SUCCESS;
}
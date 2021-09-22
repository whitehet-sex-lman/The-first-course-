#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    cin >> a >> b;
    int exc = a;
    a = b;
    b = exc;
    cout << a << ' ' << b;

    return EXIT_SUCCESS;
}
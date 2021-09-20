#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b,exc ;
    cin >> a >> b;
    exc = a;
    a = b;
    b = exc;
    std:cout << a << ' ' << b;
    return EXIT_SUCCESS;
}
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int it, n1, n2, n3;
    std::cin >> it;
    n1 = it / 100;
    it %= 100;
    n2 = it / 10;
    it %= 10;
    n3 = it;
    std::cout << n1 + n2 + n3;
    system("pause");

    return EXIT_SUCCESS;
}
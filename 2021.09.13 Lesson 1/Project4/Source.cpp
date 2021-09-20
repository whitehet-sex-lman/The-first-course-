#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int v, t;
    std::cin >> v >> t;
    int s = ((109 + v * t % 109) % 109);
    std::cout << s;

    return EXIT_SUCCESS;
}
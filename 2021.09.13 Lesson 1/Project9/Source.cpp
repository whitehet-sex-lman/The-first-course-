#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0,b=0;
   cin >> a>>b;
    std::cout << (a * (a / b) + b * (b / a)) / (b / a + a / b) << std::endl;
    return EXIT_SUCCESS;
}
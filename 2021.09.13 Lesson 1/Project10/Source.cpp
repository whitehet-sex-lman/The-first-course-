#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0,b=0;
   cin >> a>>b;
    cout << (a * (a / b) + b * (b / a)) / (b / a + a / b) << endl;
    
    return EXIT_SUCCESS;
}
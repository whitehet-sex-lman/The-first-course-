#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int v=0, t=0;
    cin >> v >> t;
    int s = ((109 + v * t % 109) % 109);
   cout << s;

    return EXIT_SUCCESS;
}
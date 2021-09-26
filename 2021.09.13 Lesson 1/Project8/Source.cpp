#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int h1 = 0, h2 = 0, m1 = 0, m2 = 0, s1 = 0, s2 = 0;
    cin >> h1 >> h2 >> m1 >> m2 >> s1 >> s2;
    s1 = h1 * 60 * 60 + m1 * 60 + s1;
    s2 = h2 * 60 * 60 + m2 * 60 + s2;
    cout << s2 - s1;
    return EXIT_SUCCESS;
}

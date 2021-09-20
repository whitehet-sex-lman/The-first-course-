#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int s1, s2, ap;
    cin >> s2;
    cin >> s1;
    ap = s1 / s2;
    cout << s1 - s2 * ap << endl;
    std::system("pause");

    return EXIT_SUCCESS;
}
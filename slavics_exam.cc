#include <iostream>
using namespace std;
int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    int n = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '?')
            n++;
    }

    if (s1.find('a'))
    {
        cout << "yes";
    }
}
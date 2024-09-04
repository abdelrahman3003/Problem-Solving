#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int i = 0; i < 4; i++)
            {
                if (s[i] == '#')
                {
                    if (i == 3)
                        cout << i+1;
                    else
                        cout << i+1 << " ";
                }
            }
        }
    }
}
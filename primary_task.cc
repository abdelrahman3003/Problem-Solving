#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        string numString = to_string(n);
        if (n > 101)
        {
            if (numString[0] == '1' && numString[1] == '0' && numString[2] != '0')

                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;

    for (int j = 0; j < n; j++)
    {
        int min = j;
        for (int i = j ; i < n; i++)
        {
            if (s[min] > s[i])
            {
                min = i;
            }
        }

        char temp = s[min];
        s[min] = s[j];
        s[j] = temp;
    }
    cout << s;
    return 0;
}

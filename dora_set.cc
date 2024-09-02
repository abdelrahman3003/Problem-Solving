#include <iostream>
using namespace std;
int main()
{

    int t, x, y;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        int oodNum = (y - x) / 2;
        if (y % 2 != 0 || x % 2 != 0)
            oodNum++;
        int res = oodNum / 2;
        cout << res << endl;
    }
}
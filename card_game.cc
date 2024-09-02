#include <iostream>
using namespace std;
int main()
{
    int x1, x2, y1, y2, t, res;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        res = 0;
        cin >> x1 >> x2 >> y1 >> y2;

        if ((x1 > y1 && x2 >= y2) || (x1 >= y1 && x2 > y2))

            res += 1;

        if (x1 > y2 && x2 >= y1 || (x1 >= y2 && x2 > y1))

            res += 1;
        if (x2 > y1 && x1 >= y2 || ((x2 >= y1 && x1 > y2)))

            res += 1;

        if (x2 > y2 && x1 >= y1 || (x2 >= y2 && x1 > y1))

            res += 1;

        if (res < 0)
            res = 0;
        cout << res << endl;
    }
}
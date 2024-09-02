#include <iostream>
using namespace std;
int main()
{
    int n, s, m, t, l, r;
    cin >> t;
    bool isShowered;
    for (int j = 0; j < t; j++)
    {

        cin >> n >> s >> m;
        isShowered = false;
        int tasks[n][2];
        for (int i = 0; i < n; i++)
        {
            cin >> l >> r;
            tasks[i][0] = l;
            tasks[i][1] = r;
        }

        for (int i = 0; i < n; i++)
        {
            int availableTime = 0;
            if (tasks[0][0] >= s)
            {

                isShowered = true;
                break;
            }
            else if (m - tasks[n - 1][1] >= s)
            {

                isShowered = true;
                break;
            }
            else if (i < n - 1)
                availableTime = tasks[i + 1][0] - tasks[i][1];

            if (availableTime >= s)
            {

                isShowered = true;
                break;
            }
        }
        if (isShowered)

            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
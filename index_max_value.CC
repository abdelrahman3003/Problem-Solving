#include <iostream>
using namespace std;
int main()
{
    long long t, n, op, l, r;
    char c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> op;
        int myarr[n];

        for (int i = 0; i < n; i++)
            cin >> myarr[i];
        for (int i = 0; i < op; i++)
        {

            cin >> c >> l >> r;
            if (c == '+')
            {
                for (int i = 0; i < n; i++)
                {
                    if (myarr[i] >= l && myarr[i] <= r)
                    {
                        myarr[i]++;
                    }
                }
            }
            else if (c == '-')
            {
                for (int i = 0; i < n; i++)
                {
                    if (myarr[i] >= l && myarr[i] <= r)
                    {
                        myarr[i]--;
                    }
                }
            }
            int max = myarr[0];

            for (int i = 1; i < n; i++)
            {
                if (myarr[i] > max)
                {
                    max = myarr[i];
                }
            }
            if (i == op - 1)

                cout << max << endl;

            else
                cout << max << " ";
        }

       
    }
     return 0;
}
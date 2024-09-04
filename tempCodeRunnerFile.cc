#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int myarr[n];
        bool isFollowed = false;
        for (int i = 0; i < n; i++)

            cin >> myarr[i];
        for (int i = 0; i < n; i++)
        {
            if (i != 0 && i != n - 1 && myarr[i] != 1)
            {
                if (myarr[i] == myarr[i + 1] - 1 || myarr[i] == myarr[i - 1] + 1)

                    isFollowed = true;
            }
        }
        if (isFollowed)

            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
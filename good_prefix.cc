#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n, sumPrefix, x;
        cin >> n;
        int arr[n];
        x = sumPrefix = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int max = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (max < arr[i])
                max = arr[i];
            if (arr[0] == 0&& i==0)
                x++;
            else if (i != 0)
            {
                if (sumPrefix == arr[i])
                {

                    x++;
                }
                else if (sumPrefix - max + arr[i] == max)
                {

                    x++;
                }
            }
            sumPrefix += arr[i];
        }
        cout << x << endl;
    }

    return 0;
}
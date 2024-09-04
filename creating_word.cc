#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string x, y;
        cin >> x >> y;
        char temp = x[0];
        x[0] = y[0];
        y[0] = temp;
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
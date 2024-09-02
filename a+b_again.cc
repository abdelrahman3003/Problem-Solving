#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int firstNum = n / 10;
        int secondNum = n % 10;
        cout << firstNum + secondNum << endl;
    }
}
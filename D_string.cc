#include <iostream>  
using namespace std;
int main() { 
    string x,y;
cin>>x>>y;
cout<<x.length()<<" "<<y.length()<<endl;
cout<<x<<y<<endl;
//cout<<x.erase(0,1);
cout<<y[0]<<x.substr(1)<<" "<<x[0]<<y.substr(1);
    return 0;  

}
#include <iostream>  
using namespace std;
int main() { 
    string x;
    cin>>x;
    for (char &c : x) {
        if (c == ',') {
            c = ' ';
        } else if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
    }
    cout<<x;
    return 0;  

}
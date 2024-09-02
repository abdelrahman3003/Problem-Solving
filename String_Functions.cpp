#include <iostream> 
#include <string> 
#include <deque>
#include <algorithm>
using namespace std;
int main() { 
    int n,q ;
    string S ;
    cin>>n>>q>>S;
  while (q--) {
    string command ;

cin>>command;
        if (command == "pop_back") {
            S.pop_back();
        } else if (command == "front") {
          cout << S.front() << endl;
        } else if (command == "back") {
           cout << S.back() << endl;
        }
        else if (command.substr(0,4) == "sort") {
            int l, r;
             sscanf(command.c_str(), "sort %d %d", &l, &r);
             sort(S.begin() + l, S.begin() + r + 1);
      
        }
            else if (command.substr(0,6) == "reverse") {
            int l, r;
             sscanf(command.c_str(), "sort %d %d", &l, &r);
             reverse(S.begin() + l, S.begin() + r + 1);
      
        }
               else if (command.substr(0,5) == "print") {
            int p;
             sscanf(command.c_str(), "print %d", &p);
             cout<<S[p]<<endl;
      
        }
          else if (command.substr(0,4) == "substr") {
            int l, r;
             sscanf(command.c_str(), "substr %d %d", &l, &r);
             cout<<command.substr(l,r)<<endl;
      
        }
        else if (command == "push_back") {
           S.push_back('x');
        }

    }
    return 0;  

}
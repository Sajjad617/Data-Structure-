#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> tk;
    for(char x : s){
        tk.push(x);
    }
    string ns="";
    while(!tk.empty()){
        ns += tk.top();
        tk.pop();
    }
    for(char m : ns){
        cout << m;
    }

    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    int val;
    while(cin >> val && val != -1){
        mylist.push_back(val);
    }
    mylist.sort();
    mylist.unique();
    for(int v : mylist){
        cout << v << " ";
    }
    
    return 0;
}
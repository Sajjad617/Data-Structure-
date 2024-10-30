#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string, int> mp;
    while(t--)
    {
        string name;
        cin >> name;

        if(mp[name]==0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << name << mp[name] << endl;
        }
        
        mp[name] = mp[name]+1;

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    set<int> m;

    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        m.insert(n);
    }

    auto x = m.begin();
    x++;
    // if(*x)
    if(x != m.end())
    {
        cout << *x << endl;
    }
    else{
        cout << "NO" << endl;
    }
    // cout << *x;
    return 0;
}
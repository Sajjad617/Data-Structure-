#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        set<int> f;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            f.insert(x);
        }
        for(auto it : f)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}


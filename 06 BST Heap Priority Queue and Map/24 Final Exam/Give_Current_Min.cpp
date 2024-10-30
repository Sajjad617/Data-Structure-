#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> f;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        f.push(x);
    }
    // f.sort();
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;

        if(x==0)
        {
            int v;
            cin >> v;
            f.push(v);
            cout << f.top() << endl;
        }
        else if(x==1)
        {
            if(f.size()==0){
                cout << "Empty" << endl;
            }
            else{
                // f.sort();
                cout << f.top() << endl;
            }
        }
        else if(x==2)
        {
            if(f.size()==0){
                cout << "Empty" << endl;
            }
            else
            {
                f.pop();
                if(f.size()==0){
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << f.top() << endl;
                }
            }
        }
    }
    return 0;
}
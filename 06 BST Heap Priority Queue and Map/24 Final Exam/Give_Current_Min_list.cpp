#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    list<int> f;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        f.push_back(x);
    }
    f.sort();
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
            f.push_back(v);
            f.sort();
            cout << f.front() << endl;
        }
        else if(x==1)
        {
            if(f.size()==0){
                cout << "Empty" << endl;
            }
            else{
                f.sort();
                cout << f.front() << endl;
            }
        }
        else if(x==2)
        {
            if(f.size()==0){
                cout << "Empty" << endl;
            }
            else
            {
                f.pop_front();
                if(f.size()==0){
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << f.front() << endl;
                }
            }
        }
    }
    return 0;
}
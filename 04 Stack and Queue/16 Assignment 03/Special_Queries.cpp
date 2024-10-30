#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string>q;
    int t;
    cin >> t;
    while(t--)
    {

        int x;
        cin >> x;
        if(x==0)
        {
            string s;
            cin >> s;
            q.push(s);

        }

        else if(x==1)
        {
            if(q.empty()){
                cout << "Invalid" << endl;
            }
            else{
                string m = q.front();
                q.pop();
                cout << m << endl;;
                // q.pop();
            }
        }

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class cmp
{
    public:
        bool operator()(pair<string, int> &a, pair<string, int> &b)
        {
            if(a.first > b.first)
                return true;
            else if( a.first < b.first)
                return false;
            else
            {
                if(a.second < b.second)
                    return true;
                else
                    return false;
            }
        }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
    int t;
    cin >> t;
    while(t--)
    {
        string name;
        int n;
        cin >> name;
        cin >> n;
        pq.push({name, n});
    }
    while(!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
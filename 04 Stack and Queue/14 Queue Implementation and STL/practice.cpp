#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    int sz=0;
    for (int i = 0; i < n; i++)
    {
        sz++;
        int x;
        cin >> x;
        q.push(x);
    }
    queue<int> q2;
    int n2;
    cin >> n2;
    int sz2 = 0;
    for (int i = 0; i < n2; i++)
    {
        sz++;
        int x2;
        cin >> x2;
        q.push(x2);
    }
    queue<int> mergq;
    // cout << q.size() << endl;
    while (!q.empty())
    {
        int v = q.front();
        mergq.push(v);
        // cout << q.front() << " ";
        q.pop();
    }
    // while (!q2.empty())
    // {
    //     int v = q2.front();
    //     mergq.push(v);
    //     // cout << q.front() << " ";
    //     q.pop();
    // }
    while (!mergq.empty())
    {
        cout << mergq.front() << " ";
        mergq.pop();
    }

    return 0;
}
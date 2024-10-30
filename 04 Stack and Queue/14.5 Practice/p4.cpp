#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        q.push(x);
    }
    stack<int> nq;

    while(! q.empty()){

        int v = q.front();

        nq.push(v);
        // cout << q.front() << " ";
        q.pop();
    }
    queue<int> nqq;
    
    while(! nq.empty()){

        int v = nq.top();

        nqq.push(v);
        // cout << q.front() << " ";
        nq.pop();
    }
    while(! nqq.empty()){
        cout << nqq.front() << " ";
        nqq.pop();
    }
    return 0;
}
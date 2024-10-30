#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> q;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    queue<int> nq;
    while(! q.empty()){

        int v = q.top();

        nq.push(v);
        // cout << q.front() << " ";
        q.pop();
    }
    stack<int> nqq;
    
    while(! nq.empty()){

        int v = nq.front();

        nqq.push(v);
        // cout << q.front() << " ";
        nq.pop();
    }
    while(! nqq.empty()){
        cout << nqq.top() << " ";
        nqq.pop();
    }
    return 0;
}
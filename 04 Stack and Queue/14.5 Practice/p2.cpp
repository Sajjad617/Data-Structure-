#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> q;
    int n;
    cin >> n;
    int sz = 0;
    for(int i=0; i<n; i++){
        sz++;
        int x;
        cin >> x;
        q.push(x);
    }
    // stack<int> nqq;
    
    // while(! q.empty()){

    //     int v = q.top();

    //     nqq.push(v);
    //     // cout << q.front() << " ";
    //     q.pop();
    // }


    queue<int> nq;
    int n2;
    cin >> n2;
    int sq = 0;
    for(int i=0; i<n2; i++){
        sq++;
        int x;
        cin >> x;
        nq.push(x);
    }
    if(sz == sq){
        int flag = 0;
    
        while(! q.empty()){

            // cout << "stack = " << q.top() << " q= " << nq.front() << endl;
            if(nq.front() != q.top()){
                flag++;
                break;
            }
            nq.pop();
            q.pop();
        }
        if(flag) cout << "NO";
        else cout << "YES";

    }
    else cout << "NO";
    return 0;
}
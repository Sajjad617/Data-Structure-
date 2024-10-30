#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here.
    int n;
    cin >> n;
    queue<int>q;
    for(int i=0; i<n; i++){
        int x;
         cin >> x;
        q.push(x);
    }
    queue<int> nq;
    int size = 0;

    while(!q.empty()){
        size++;
        nq.push(q.front());
        q.pop();
    }

    stack<int> tk;
    int k;
    cin >> k;
    int siz = 0;
    while(!nq.empty()){
        if(k==0) break;
        siz++;
        // cout << nq.front() << endl;
        if(siz == k){
            // cout << size << k;
            tk.push(nq.front());
            nq.pop();
            break;
        }
        tk.push(nq.front());
        nq.pop();
    }
    while(!tk.empty()){
        q.push(tk.top());
        // cout << tk.top() << endl;
        tk.pop();
    }
    while(!nq.empty()){
        q.push(nq.front());
        nq.pop();
    }
    while(!q.empty()){
        // q.push(nq.front());
        cout << q.front() << " ";
        q.pop();
    }

    // return q;

    return 0;
}
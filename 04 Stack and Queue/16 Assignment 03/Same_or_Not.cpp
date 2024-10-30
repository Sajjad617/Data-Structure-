#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> ntk;
    queue<int> mq;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        ntk.push(x);
    }

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mq.push(x);
    }
    int flag = 0;
    while(!ntk.empty()){
        if(ntk.top() != mq.front()){
            flag++;
            break;
        }

        ntk.pop();
        mq.pop();
    }
    if(n==m){
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl; 
    }
    else cout << "NO" << endl;


    return 0;
}
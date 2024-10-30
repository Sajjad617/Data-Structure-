#include<bits/stdc++.h>
using namespace std;
class myQueue_stack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void qpop()
    {
        l.pop_front();
    }
    void pop()
    {
        l.pop_back();
    }
    int front()
    {
        return l.front();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    myQueue_stack ntk;
    myQueue_stack mq;

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
        mq.qpop();
    }
    if(n==m){
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl; 
    }
    else cout << "NO" << endl;


    return 0;
}
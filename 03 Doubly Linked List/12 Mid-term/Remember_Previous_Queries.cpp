#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> doubly_ll;
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int x, v;
        cin >> x >> v;
        if(x == 0){
            doubly_ll.push_front(v);
        }
        else if(x == 1){
            doubly_ll.push_back(v);
        }
        else if(x == 2){
            int sz = doubly_ll.size();
            if(sz > v){
                doubly_ll.erase(next(doubly_ll.begin(), v));
            }
        }
        cout << "L -> ";
        for(int value : doubly_ll){
            cout << value << " ";
        }
        cout << endl;
        list<int> list2(doubly_ll);
        list2.reverse();
        // list<int> doubly_ll(list2);

        cout << "R -> ";
        for(int valu : list2){
            cout << valu << " ";
        }
        cout << endl;


    }
    return 0;
}
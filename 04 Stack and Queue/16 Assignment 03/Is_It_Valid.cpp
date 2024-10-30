#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        stack<char> st;
        string x;
        cin >> x;

        for(char s : x)
        {
            if(!st.empty()){
                
                if(s == '1' && st.top() == '0' || s == '0' && st.top() == '1'){
                    // cout << "x=" << x << "t=" << st.top() << endl;
                    st.pop();   
                }

                // else if(s == '1' && st.top() == '0'){
                //     st.pop();
                // }

                else{
                    st.push(s);
                }
            }
            else{
                st.push(s);
            }
        }

        if(st.empty()) cout << "YES" << endl;
        else cout << "NO " <<  endl;
    }
    return 0;
}
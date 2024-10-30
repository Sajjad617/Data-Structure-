#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while ( t--){
        int n;
        cin >> n;
        int arry[n];
        for(int i=0; i<n; i++){
            cin >> arry[i];
        }

        int flag = 0;

        for(int i=0; i<n-1; i++){
            if(arry[i] > arry[i+1]){
                flag ++;
                // cout << arry[i] << " " << arry[i+1] << flag << endl;
            }
        }

        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
    return 0;
}
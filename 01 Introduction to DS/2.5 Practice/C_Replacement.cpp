#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arry(n);
    for(int i=0; i<n; i++){
        cin >> arry[i];
    }

    for(int i=0; i<n; i++){
        if (arry[i]<0){
            arry[i]=2;
        }
        else if( arry[i]>0){
            arry[i]=1;
        }
        else{
            arry[i]=0;
        }
    }

    for(int i=0; i<n; i++){
        cout << arry[i] << " ";
    }
    
    return 0;
}
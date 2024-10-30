#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arry[n];
    // vector<int> arry(n);
    for (int i=0; i<n; i++){
        cin >> arry[i];
    }
    sort(arry, arry+n);
    int flag=0;
    for (int i=0; i<n-1; i++){
        if(arry[i]==arry[i+1]) flag++;
    }
    if (flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}


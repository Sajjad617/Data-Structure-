#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arry[n];
    for(int i=0; i<n; i++){
        cin >> arry[i];
    }
    
    long long int sum_arry[n]={0};
    sum_arry[0]=arry[0];
    for(int i=1; i<n; i++){
        sum_arry[i] = sum_arry[i-1]+arry[i];
    }

    for(int i=n-1; i>=0; i--){
        cout << sum_arry[i] << " ";
        
    }


    return 0;
}
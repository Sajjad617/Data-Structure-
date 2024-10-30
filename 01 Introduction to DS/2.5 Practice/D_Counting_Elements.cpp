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
    int count =0;
    for(int i=0; i<n; i++){
        auto it = find(arry.begin(), arry.end(), arry[i]+1);
        if(it != arry.end()){
            count ++;
        }
    } 

    cout << count;

    return 0;
}
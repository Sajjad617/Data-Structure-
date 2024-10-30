#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int n2;
    cin >> n2;
    vector<int> a2(n2);
    for(int i=0; i<n2; i++){
        cin >> a2[i];
    }

    int x;
    cin >> x;
    a.insert(a.begin()+x, a2.begin(), a2.end());

    for(int ans : a){
        cout << ans << " ";
    }

    
    return 0;
}
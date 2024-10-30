#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int arry[26]={0};
    for (int i=0; i<s.size(); i++){
        
        arry[s[i]-97]++;
    }
    for( char i = 'a'; i<'z'+1; i++){
        if(arry[i-'a'] != 0){
        cout << i << " : " << arry[i-'a'] << endl; 
        }
    }
    return 0;
}
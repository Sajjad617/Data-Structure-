#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        string str;
        getline(cin, str);
        string word;
        stringstream ss(str);
        map<string, int> mp;
        int m= 0;
        string name;
        while(ss >> word)
        {
            mp[word]++;

            if(m<mp[word]){

                m = mp[word];
                name = word;

            }
        }
        cout << name << " " << m << endl;
    }
    return 0;
}
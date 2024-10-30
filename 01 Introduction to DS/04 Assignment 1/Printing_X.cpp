#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n;
    t = n;
    int cal = (n/2)-1;
    int a=1;
    int b=n-2;
    if(n==1){
        cout << "X";
    }
    else{
        for(int i=0; i<t/2; i++){

            
            for(int j=1; j<a; j=j+1){
                    cout << " ";
            }
            cout << "\\";
            a = a+1;
            for(int j=b-1; j>=0; j--){
                cout << " ";
            }
            b = b-2;
            cout << "/" << endl;
        }

        // ........
        for(int i=0; i<n/2; i++){
        cout << " ";
        }
        cout << "X" << endl;
        // ......
        a = 1;
        for(int i=0; i<t/2; i++){
            for(int j=0; j<cal; j++){
                cout << " ";
            }
            cal--;
            cout << "/";
            for(int j=0; j<a; j=j+1){
                cout << " ";
            }
            a = a+2;
            cout << "\\" << endl;

        }
    }
    
    return 0;
}
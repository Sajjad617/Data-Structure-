// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     vector<int> v2(n);
//     vector<int> final(n+n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v2[i];
//     }

//     final=v2;
//     for(int i=v2.size(); i<(v2.size()+v.size()); i++)
//     {
//         final[i]=v[i-v2.size()];
//         // cout << final.size() << endl;
//         // cout << final[i] << " v";
//         // cout << "i= " << i << " "; 
//     }
//         // cout << final.size() << endl;

//     for (int i = 0; i < n*2; i++)
//     {
//         cout << final[i] << " ";
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    // vector<int> final(n+n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    // final=v2;
    vector<int> final(v2);
    final.insert(final.end(),v.begin(), v.end());

    // for(int i=v2.size(); i<(v2.size()+v.size()); i++)
    // {
    //     final[i]=v[i-v2.size()];
    //     // cout << final.size() << endl;
    //     // cout << final[i] << " v";
    //     // cout << "i= " << i << " "; 
    // }
        cout << final.size() << endl;

    for (int i = 0; i < n*2; i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}
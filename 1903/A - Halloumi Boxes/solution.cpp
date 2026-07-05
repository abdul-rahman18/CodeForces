#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
 
    while(t--)
    {
        int n,k; cin >> n >> k;
 
        int a[n];
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(i>0 && a[i]<a[i-1]) flag = false;
        }
 
        if(flag) cout << "Yes" << endl;
        else
        {
            if(k>1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
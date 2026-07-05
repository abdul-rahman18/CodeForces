#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        int n,x; cin >> n >> x;
        
        int prev = 0;
        int mx = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            int x; cin >> x;
            mx = max(mx,x-prev);
            prev = x;
        }
        
        mx = max(mx,(x-prev)*2);
        
        cout << mx << endl;
    }
    return 0;
}
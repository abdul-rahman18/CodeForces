#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        
        int n; cin >> n;
        
        int prev; cin >> prev;
        int diff = INT_MAX;
        bool flag = false;
        
        for(int i=1;i<n;i++) 
        {
            int x; cin >> x;
            diff = min(diff,x - prev);
            
            if(prev > x) flag = true;
            prev = x;
        }
        
        if(!flag)
        {
            diff = max(1,diff);
            diff = diff/2+1;
        }else diff = 0;
        
        cout << diff << endl;
        
    }
    
    return 0;
}
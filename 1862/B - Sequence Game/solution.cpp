#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        int n; cin >> n;
        
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int x; cin >> x;
            
            if(i>0 && ans.back()>x) ans.push_back(x);
            
            ans.push_back(x);
        }
        
        cout << ans.size() << endl;
        for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
        
        cout << endl;
    }
    
    return 0;
}
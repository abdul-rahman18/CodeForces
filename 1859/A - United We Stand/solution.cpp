#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        int n; cin >> n;
        
        vector<int>a(n);
        vector<int>b;
        vector<int>c;
        
        for(int i=0;i<n;i++) cin >> a[i];
        
        int mx = std::max_element(a.begin(), a.end()) - a.begin();
        c.push_back(a[mx]);
        
        for(int i=0;i<n;i++)
        {
            if(i == mx) continue;
            if(a[i]!=c.back()) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        
        if(b.size()==0 || c.size()==0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << b.size() << " " << c.size() << endl;
        
        for(int i=0;i<b.size();i++) cout << b[i] << " ";
        cout << endl;
        for(int i=0;i<c.size();i++) cout << c[i] << " ";
        cout << endl;
    }
    
    return 0;
}
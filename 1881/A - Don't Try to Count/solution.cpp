#include <bits/stdc++.h>
using namespace std;
 
bool valid(string& x, string& s)
{
    int m = s.size();
    if(x.size() < m) return false;
    
    string temp = x.substr(0,m);
    if(temp == s) return true;
    
    for(int i=1;i<x.size()-m+1;i++)
    {
        temp = x.substr(i,m);
        if(temp == s) return true;
    }
    
    return false;
}
 
int main() {
	// your code goes here
    int t; cin >> t;
    while(t--)
    {
        int n,m; cin >> n >> m;
        
        string x; cin >> x;
        string s; cin >> s;
        
        int ans = -1;
        
        string str = x;
        
        for(int i=0;i<=5;i++)
        {
            if(valid(str,s))
            {
                ans = i;
                break;
            }
            
            str = str + str;
        }
        
        cout << ans << endl;
    }
}
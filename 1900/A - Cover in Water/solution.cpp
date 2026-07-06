#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        
        int cnt = 0;
        int dCnt = 0;
        bool flag = false;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                cnt++;
                dCnt++;
            }
            else cnt = 0;
            
            if(cnt == 3) flag = true;
        }
        
        if(flag) cout << 2 << endl;
        else cout << dCnt << endl;
    }
    return 0;
}
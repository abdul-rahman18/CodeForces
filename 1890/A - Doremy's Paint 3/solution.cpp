#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        int n; cin >> n;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            int x; cin >> x;
            mp[x]++;
        }
        
        if(mp.size()>=3) cout << "No" << endl;
        else
        {
            if(mp.size() == 1)
            {
                cout << "Yes" << endl;
                continue;
            }
            int freq1 = mp.begin()->second;
            int freq2 = next(mp.begin())->second;
            if(n%2==0)
            {
                if(freq1 == n/2 && freq2 == n/2) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
            else
            {
                if((freq1 == n/2 && freq2 == n/2 + 1) || (freq2 == n/2 && freq1== n/2+1)) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
    }
    return 0;
}
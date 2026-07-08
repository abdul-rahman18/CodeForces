#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        
        int neg = 0;
        int pos = 0;
        
        for(int i=0;i<n-1;i++) 
        {
            int x; cin >> x;
            
            if(x>=0) pos += x;
            else neg += x;
        }
        
       cout << -1*(pos+neg) << endl;
    }
}
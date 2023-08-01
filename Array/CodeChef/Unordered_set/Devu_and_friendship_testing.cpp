#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,max=0;
	    cin >> n;
	    unordered_set<int> vec;
	    for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(vec.find(x)==vec.end())
            {
                vec.insert(x);
                max++;
            }
            
        }
        
        cout << max << endl;
	    
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    unordered_set<int> vec;
	    int n,max=0;
	    cin >> n;
	    for (int i = 1; i <= n; i++) {
	        int x;
	        cin >> x;
            if (vec.find(x)==vec.end())
            {
                vec.insert(x);
                if (vec.size() > max)
                {
                    max = vec.size();
                }
            }
            else
            vec.erase(x);
	    }
	    cout << max << endl;
	}
	return 0;
}

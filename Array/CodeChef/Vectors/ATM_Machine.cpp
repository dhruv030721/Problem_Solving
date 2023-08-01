#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    vector<int> vec;
	    for (int i = 0; i < n; i++) {
	        int x;
	        cin >> x;
	        vec.push_back(x);
	    }
        for (auto i = vec.begin(); i < vec.end(); i++)
        {
            if(*i <= k)
            {
                cout << "1";
                k -= *i;
            }
            else
            cout << "0";
        }
        cout << endl;
	}
	return 0;
}

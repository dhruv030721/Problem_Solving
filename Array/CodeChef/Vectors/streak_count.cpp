#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,count=0;
	    cin >> n;
	    int addy[n],om[n],addy_streak,om_streak;
	    vector<int> i1;
	    for (int i = 0; i < n; i++) {
	        cin >> om[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> addy[i];
	    }
	    for (int i = 0; i < n; i++) {
	        if(om[i] != 0)
	        {
	            count++;
	        }
	        else
	        {
	            i1.push_back(count);
	            count = 0;
	        }
	    }
        i1.push_back(count);
	    om_streak = *max_element(i1.begin(), i1.end());
	    i1.clear();
        count = 0;
	     for (int i = 0; i < n; i++) {
	        if(addy[i] != 0)
	        {
	            count++;
	        }
	        else
	        {
	            i1.push_back(count);
	            count = 0;
	        }
	    }
        i1.push_back(count);
	    addy_streak = *max_element(i1.begin(), i1.end());
	    i1.clear();
	    if(addy_streak > om_streak)
	    cout << "Addy";
	    else if(om_streak > addy_streak)
	    cout << "Om";
	    else
	    cout << "Draw";
	}
	return 0;
}

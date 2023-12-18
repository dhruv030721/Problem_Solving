#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a1[n];
        int a2[n];
        int MAX_Nutrition = 0;

        // Find the maximum index in a1
        int maxIndex = 0;
        for (int i = 0; i < n; i++) {
            cin >> a1[i];
            maxIndex = max(maxIndex, a1[i]);
        }
        vector<int> v(maxIndex + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a2[i];
        }

        for (int i = 0; i < n; i++) {
            if (v[a1[i]] < a2[i]) {
                v[a1[i]] = a2[i];
            }
        }

        for (int i = 0; i <= maxIndex; i++) {
            MAX_Nutrition = MAX_Nutrition + v[i];
        }

        cout << MAX_Nutrition << endl;
    }
    return 0;
}
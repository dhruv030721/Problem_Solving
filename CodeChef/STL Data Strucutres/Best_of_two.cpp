#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int alice[3], bob[3],sum_alice,sum_bob,temp;
	    cin >> alice[0] >> alice[1] >> alice[2] >> bob[0] >> bob[1] >> bob[2];
        int n = sizeof(alice)/ sizeof(alice[0]);
        sort(alice,alice+n);
        n = 0;
        n = sizeof(bob)/ sizeof(bob[0]);
        sort(bob,bob+n);
        sum_alice = alice[2] + alice[1];
        sum_bob = bob[2] + bob[1];
        if (sum_alice > sum_bob)
        {
            cout <<  "Alice" <<endl;
        }
        else if (sum_alice < sum_bob)
        {
            cout << "Bob" <<endl;
        }
        else{
            cout << "Tie" <<endl;
        }
        
	}
	return 0;
}

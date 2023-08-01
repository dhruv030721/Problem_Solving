#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int l,r,tem,temp=0;
	    cin >> l >> r;
	    for(int i=l; i<=r; i++)
	    {
            tem = i;
	        tem = tem % 10;
	        if(tem == 2 || tem == 3 || tem ==9)
	        temp++;
	    }
        cout << temp;
	}
	return 0;
}

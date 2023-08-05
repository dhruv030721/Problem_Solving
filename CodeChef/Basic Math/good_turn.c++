#include <iostream>
using namespace std;

int main() {
	int t,x,y,i=0;
	cin >> t;
	cin >> x,y;
	while(i<t)
	{
	   
    if(y+x>6)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "No" << endl;
    }
    i++;
	}
	return 0;
}

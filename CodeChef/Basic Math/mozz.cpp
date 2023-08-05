#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y,r,need_of_stick,stick=0,temp=0;
	    cin >> x >> y >> r;
	    r = r/30;
	    need_of_stick = x+r;
	    while (stick < need_of_stick)
        {
            stick = stick + y;
            temp++;
        }
        
	    cout << temp << endl;
	}
	return 0;
}

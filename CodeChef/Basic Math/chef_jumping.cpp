#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if(n%3==0 || n%6==1)
    {
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}



// This code is working but it's throgh TLE error
// #include <iostream>
// using namespace std;

// int main() {
// 	int initial = 0;
// 	int input;
// 	cin >> input;
// 	int addtemp = 1;
// 	while(initial < input)
// 	{
// 	    if(addtemp <= 3)
// 	    {
// 	        initial += addtemp;
// 	        addtemp++;
// 	    }
// 	    else
// 	    {
// 	        addtemp = 1;
// 	    }
// 	}
// 	if(initial == input)
// 	{
// 	    cout << "YES";
// 	}
// 	else
// 	{
// 	    cout << "NO";
// 	}
// 	return 0;
// }

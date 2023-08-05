#include<bits/stdc++.h>
using namespace std;

void frequency(vector<int> vec){

	map<int, int> m;
	int max=0,element=0,temp=0;
	for (int i = 0; i < vec.size(); i++)
	{
		if (m.find(vec[i]) == m.end())
		{
			m[vec[i]] = 1;
		}
		else
		m[vec[i]]++;
	}
	for (auto& it : m )
    {
        if(it.second > max)
        max = it.second;
    }
	for (auto& it : m )
    {
        if(it.second == max)
        element = it.first;
    }
	for (int i = 0; i < vec.size(); i++)
	{
		if(vec[i] != element)
		{
			vec[i] = element;
			temp++;
		}
	}
	cout << temp << endl;
	
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> vec;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			vec.push_back(x);
		}
		frequency(vec);
	}
	return 0;
}

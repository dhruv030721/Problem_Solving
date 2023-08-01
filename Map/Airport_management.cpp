#include<bits/stdc++.h>
using namespace std;
void frequency(vector<int> vec)
{
    map<int, int> M;
    int max=0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (M.find(vec[i]) == M.end())
            M[vec[i]] = 1;
        else
            M[vec[i]]++;
    }
    for (auto& it : M )
    {
        if(it.second > max)
        max = it.second;
    }
    cout << max << endl;

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
        for (int i = 1; i <= n*2; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        frequency(vec);
    
    }
}
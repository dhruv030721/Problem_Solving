#include<bits/stdc++.h>
using namespace std;
int main()
{

    // In map the key is unique in sorted order but values are not unique

    unordered_map<int, pair<int, int>> hash_table;

    hash_table[0] = {10,20};

    hash_table[0].second = 30;

    cout << hash_table[0].first;

    for(auto i : hash_table){
        cout << i.first;
    }


    return 0;
}
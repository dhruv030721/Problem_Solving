#include<bits/stdc++.h>
using namespace std;


// Pairs
void Pair(){
    pair<int, int> p = {1,3};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> nested_pair = {1, {3,5}};

    cout << nested_pair.first << " " << nested_pair.second.second << endl;

    // array of pair
    pair<int, int> arr[] = {{1,3}, {2,4}, {4,6}};

    cout << arr[1].second;

}



int main()
{
    Pair();
    return 0;
}
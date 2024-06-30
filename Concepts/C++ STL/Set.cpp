#include<bits/stdc++.h>
using namespace std;
int main()
{

    // Set : 

    // set stores all values in sorted manner and unique

    set<int> st;
    st.insert(1);
    st.emplace(2);

    auto it = st.find(2); // Here, it will return iterator

    auto it = st.find(6); // Here, set not contain 6 so that here it will return set.end()



    // Multiset : 

    // Multiset is same as set but it not stores unique

    multiset<int> ms;
    ms.insert(1);

    ms.count(1);

    ms.erase(ms.find(1));



    // Unorderd_set :

    // It is also same as set but it stores unique but in not sorted form

    return 0;
}
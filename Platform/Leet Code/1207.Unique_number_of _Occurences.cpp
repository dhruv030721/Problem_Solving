 
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count = 0;
        vector<int> ans;
        for(int i=0; i<arr.size(); i++)
        {
            int sum=0;
            for(int j=i; j<arr.size(); j++)
            {
                if(arr[i]==arr[j])
                {
                     count++;
                     sum++;
                }
                else
                {
                    break;
                }
            }
            i=count-1;
            ans.push_back(sum);
        }
    set<int> temp;
    for(auto i = 0; i<ans.size(); i++)
    {
        temp.insert(i);
    }
    if(temp.size() == ans.size())
    {
        return true;
    }
    else{
        return false;
    }
    }
};

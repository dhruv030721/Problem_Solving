class Solution { 
public: 
    int minOperations(vector<int>& nums, int k) { 
        reverse(nums.begin(),nums.end()); 
         
        int count = 0; 
        set<int> s; 
        int f = 0; 
        for(auto val:nums){ 
            if(val<=k){ 
                s.insert(val); 
            } 
            count++; 
            if(s.size()==k){ 
                f = 1; 
                break; 
            } 
        } 
         
        if(f==1){ 
            return count; 
        } 
         
        return -1; 
    } 
};
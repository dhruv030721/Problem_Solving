vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> hash(n+1,0);
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] <= n)
        hash[nums[i]]++;
    }
    vector<int> Ans(hash.begin()+1, hash.end());
    return Ans;  
}
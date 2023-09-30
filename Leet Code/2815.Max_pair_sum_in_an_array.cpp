class Solution {
    public: 
    int getMax(string s)
{
    int max = s[0] - '0';
    for (int i = 0; i < s.length(); i++)
    {
        int val = s[i] - '0';
        if(val > max)
        max = val; 
    }
    cout << max << endl;
    return max;
}



int maxSum(vector<int> &arr)
{
    int max = -1;
    int n = arr.size();

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // Convert both number into string to find the max digit of that number
            string a = to_string(arr[i]);
            string b = to_string(arr[j]);
            
            // getMax function returns the max digit of that number
            int val1 = getMax(a);
            int val2 = getMax(b);
            
            // If the both number's max digit equal then we process addition operation
            if(val1 == val2)
            {
                int sum = arr[i] + arr[j];
                if(sum > max)
                {
                    max = sum;
                }
            }
        }
        
    }
    return max;
}

}



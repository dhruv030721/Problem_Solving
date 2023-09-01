#include<bits/stdc++.h>
using namespace std;
// <----------------- It is a first type of question from pascal tringle ------------> 

// This function used to find the element value in pascal triangle through the value of row and column value 
// >> to calculate this value the formula used is : r-1 c c-1 (Here, c for combination)
int pascalTringleElement(int r, int c)
{
    r = r - 1;
    c = c - 1;
    int result = 1;
    for (int i = 0; i < c; i++)
    {
        result = result * (r - i);
        result = result / (i + 1);
    }
    return result;
}


// <----------------- It is a second type of question from pascal tringle ------------> 

// This function used to print the nth row of pascal triangle by just passing the value of row 
void nthRowofPascalTringle(int n)
{
    int ans = 1;
    cout << ans << " ";
    for (int i = 1; i < n; i++)
    {
        // It is for Brute force approach
        // cout << pascalTringleElement(n,i) << " ";

        // for Better approach 
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
}


// <----------------- It is a third type of question from pascal tringle ------------> 


// This is for print the n rows pascal triangle
vector<int> generateRow(int row)
{
    long long ans = 1;
    vector<int> ansRow; 
    ansRow.push_back(1);
    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTringle(int n)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}


int main()
{
    int n;
    cin >> n;
    for(auto i : pascalTringle(n))
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;   
    }
    return 0;
}
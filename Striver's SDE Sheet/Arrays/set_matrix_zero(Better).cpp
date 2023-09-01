#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> two_dimension_array(int row, int col)
{
    vector<vector<int>> matrix(row, vector<int>(col));

    // 2D Array input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

vector<vector<int>> setZeroMatrix(int row, int col)
{
    int rows[row] = {0};
    int cols[col] = {0};
    vector<vector<int>> matrix = two_dimension_array(row,col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(matrix[i][j] == 0)
            {
                rows[i] = 1;
                cols[j] = 1;
                
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(rows[i] || cols[j])
            {
                matrix[i][j] = 0;
            }
        }
        
    }
    return matrix;
}
int main()
{
    int row,col;
    cin >> row >> col;
    setZeroMatrix(row, col);
    for(auto i : setZeroMatrix(row,col))
    {
        for(auto j : i)
        {
            cout << j << " ";
        }           
        cout << endl;
    }
    return 0;
}
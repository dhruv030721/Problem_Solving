#include <bits/stdc++.h>
using namespace std;

// 2D Array
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

void markRow(vector<vector<int>> &matrix, int row, int col, int i)
{
    for (int j = 0; j < col; j++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int row, int col, int j)
{
    for (int i = 0; i < row; i++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
    
}

vector<vector<int>> setZeroMatrix(int row, int col)
{
    vector<vector<int>> matrix = two_dimension_array(row,col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(matrix[i][j] == 0)
            {
                markRow(matrix, row, col, i);
                markCol(matrix, row, col, j);
            }
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(matrix[i][j] == -1)
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
    vector<vector<int>> matrix = setZeroMatrix(row,col);
   for(auto i : matrix)
   {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
   }
    
    return 0;
}
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


// <---------------- Brute force ------------------->

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

vector<vector<int>> setZeroMatrixBruteForce(int row, int col)
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



// <---------------- Better ------------------->

vector<vector<int>> setZeroMatrixBetter(int row, int col)
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


// <---------------- Optimal ------------------->

vector<vector<int>> setZeroMatrixOptimal(int row, int col)
{
    int col0 = 1;
    // int col[col] = {0}; --> matrix[0][..]
    // int row[row] = {0}; --> matrix[..][0]
    vector<vector<int>> matrix = two_dimension_array(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(matrix[i][j] == 0)
            {
                // mark the i-th row
                matrix[i][0] = 0;
                // mark the j-th col'
                if(j != 0)
                matrix[0][j] = 0;
                else
                col0 = 0;
            }
        }
    }
    
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if(matrix[i][j] != 0)
            {
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0] == 0)
    {
        for (int j = 0; j < col; j++)
        matrix[0][j] = 0;
    }
    if(col0 == 0)
    {
        for (int i = 0; i < row; i++)
        matrix[i][0] = 0;
    }
    return matrix;
}


int main()
{
    int row,col;
    cin >> row >> col;
    vector<vector<int>> matrix = setZeroMatrixOptimal(row,col);
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
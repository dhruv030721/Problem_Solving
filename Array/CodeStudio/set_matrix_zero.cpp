#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int N,M;
		cin >> N >> M;
        vector<vector<int>> matrix(N, vector<int>(M));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int x;
                cin >> x;
                matrix[i][j] = x;
            }
        }
        
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<M; j++)
			{
				if(matrix[i][j]==0)
				{
					int x = i;
					int y = j;
					// to make whole row zero
					for(j=0; j<M; j++)
					{
						matrix[x][j] = 0;
					}
					// to make column zero
					for(i=0; i<N; i++)
					{
						matrix[i][y] = 0;
					}
				}
			}
		}
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<M; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
    return 0;
}
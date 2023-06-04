#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	vector<int>ith;
	vector<int>jth;
	int i = 0,j = 0;
	for(i = 0;i<matrix.size();i++)
	{
		for(j = 0;j<matrix[0].size();j++)
		{
			if(matrix[i][j]==0)
			{
				ith.push_back(i);
				jth.push_back(j);
			}

		}
	}
	for(int i = 0;i<ith.size();i++)
	{
		for(int x=0;x<matrix[0].size();x++)
		{
			matrix[ith[i]][x]=0;
		}
	}
	for(int i = 0;i<jth.size();i++)
	{
		for(int x=0;x<matrix.size();x++)
		{
			matrix[x][jth[i]]=0;
		}
	}
}

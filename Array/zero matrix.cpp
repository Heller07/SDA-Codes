#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
                  if (matrix[i][j] == 0) {
                    for(int k=0 ; k <n ; k++){
					if(matrix[k][j] == 0) continue;
					matrix[k][j]  = -1;
                  }
				  for(int k=0 ; k<m ; k++){
					if(matrix[i][k] == 0) continue;
					matrix[i][k] = -1;
				}


                }
        }
        }
		for(int i=0 ;i<n ; i++){
        for (int j = 0; j < m; j++) {
                if (matrix[i][j] == -1)
                  matrix[i][j] = 0;
        }
                }
                return matrix;
  

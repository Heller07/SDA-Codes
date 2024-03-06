#include <bits/stdc++.h> 
//TC = O(n^3 of order)
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
//optimised
//TC = O(nm)
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    vector<int> row(n, 0); // Initialize row markers with 
    vector<int> col(m, 0); // Initialize column markers with 0
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(row[i] || col[j]) {
                matrix[i][j] = 0; // Set the element to 0 if its row or column is marked
            }
        }
    }
    return matrix;
}
  

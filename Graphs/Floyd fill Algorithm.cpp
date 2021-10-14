// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	   int n = matrix.size();
	   for(int k = 0 ; k < n ;  k++)
	   {
	       for(int i = 0 ; i  < n ; i++)
	       {
	           for(int j = 0 ; j < n ; j++)
	           {
	               if(matrix[i][k] == -1 || matrix[k][j] == -1)
	               continue;
	               
	               else if(matrix[i][j] == -1)
	               {
	                   matrix[i][j] = matrix[i][k] + matrix[k][j];
	               }
	               else if(matrix[i][j] > matrix[i][k]+ matrix[k][j])
	               {
	                   matrix[i][j] = matrix[i][k] + matrix[k][j];
	               }
	           }
	       }
	   }
	   

	   
	   
	}
};
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    char dir = 'r';
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        int m=matrix.size(),n=matrix[0].size();
        int i=0,j=0;
        while(i>=0 && i<m && j>=0 && j<n){
        
            if(matrix[i][j]==0){
                if(dir=='r') j++;
                if(dir=='u') i--;
                if(dir=='d') i++;
                if(dir=='l') j--;
            }
            else{
                matrix[i][j]=0;
                if(dir=='r'){
                    i++;
                    dir='d';
                }
                else if(dir=='l'){
                    i--;
                    dir='u';
                }
                else if(dir=='u'){
                    j++;
                    dir='r';
                }
                else{
                    j--;
                    dir='l'; } } 
                }
        pair<int,int> ans;
        if(dir=='r') j--;
        if(dir=='u') i++;
        if(dir=='d') i--;
        if(dir=='l') j++;
        ans={i,j};
        return ans;
   }
};    
 

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends
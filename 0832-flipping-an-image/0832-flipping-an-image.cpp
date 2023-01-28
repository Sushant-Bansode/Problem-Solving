class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    vector<vector<int>>ans;
    for(int i = 0; i< image.size( ); ++i){
            vector<int>temp;        
        for(int j = 0; j< image[i].size( ); ++j){
            temp.push_back(image[i][j]); 
        }
      reverse(temp.begin( ), temp.end( ));  
        for(int i =0; i< temp.size( ); ++i){
            if(temp[i] == 0){
                temp[i] = 1;
            }else{
                temp[i] = 0;
            }
        }      
    ans.push_back(temp);
    }
 return ans;       
    }
};
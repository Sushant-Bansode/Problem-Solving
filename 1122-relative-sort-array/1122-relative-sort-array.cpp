class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) { vector<bool> a(arr1.size( ));
  for(auto x: a){x = false;}                                             vector<int> temp, ans;
  for(int i = 0; i< arr2.size( ); ++i){
       int t = arr2[i];
      for(int j = 0; j < arr1.size( ); ++j){
        if(arr1[j] == t){
         a[j] = true;
         ans.push_back(arr1[j]);   
        }   
     }   
  }                                                              
 for(int i = 0; i< arr1.size( ); ++i){
     if(a[i] == false){
         temp.push_back(arr1[i]);
     }
 }                                                                       sort(temp.begin( ), temp.end( ));
 for(auto x: temp){
  ans.push_back(x);   
 }                                                                      return ans;  
    }
};
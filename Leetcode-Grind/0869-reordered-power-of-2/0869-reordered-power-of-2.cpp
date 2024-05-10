class Solution {
public:
bool reorderedPowerOf2(int n) {
        string s = to_string(n);        
        sort(s.begin( ), s.end( ));
    
    vector<string> arr;
    for(int i = 0; i <= 30; i++){
        int x = pow(2,i);
        arr.push_back(to_string(x));
    }
    
    for(int i = 0; i< arr.size( ); ++i){
        sort(arr[i].begin( ), arr[i].end( ));
    }
    
    for(int i = 0; i< arr.size( ); ++i){
        if(arr[i] == s){
            return true;
        }
    }
    
    return false;
    }
};
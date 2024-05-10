class Solution {
public:
    int findComplement(int num) {
      vector<int> temp; 
		// converting to binary representation and storing in temporary vector.
        while( num != 0 ){
            temp.push_back( num % 2 );
            num /= 2;
        } 
		// making complement of the same usig if and else.
        for(int i=0; i< temp.size(); i++){
            if( temp[i] == 1 ){
                temp[i] = 0;
            }
            else if( temp[i] == 0 ){
            temp[i] = 1;
            }
        } 
        int res = 0;
        for(int i=temp.size()-1; i>-1; i--){
            res = 2*res + temp[i];
        }  
        return res;
    }
};
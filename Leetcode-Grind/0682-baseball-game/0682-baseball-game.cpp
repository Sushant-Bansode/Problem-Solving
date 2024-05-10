class Solution {
public:
int calPoints(vector<string>& operations) {
    stack <int> st;
    for (int i = 0; i < operations.size(); i++){
        if (operations[i] == "C"){
            st.pop();
        }
        else if (operations[i] == "D"){
            st.push(2 * (st.top()));
        }
        else if (operations[i] == "+"){
           int t = st.top( );
           st.pop( );
           int add = t + st.top( );
           st.push(t);
           st.push(add); 
        }
        else{
            st.push(stoi(operations[i]));
        }
    }
   int ans = 0;
    while(!st.empty( )){
        ans += st.top();
       st.pop( ); 
    }
    return ans;     
    }
};
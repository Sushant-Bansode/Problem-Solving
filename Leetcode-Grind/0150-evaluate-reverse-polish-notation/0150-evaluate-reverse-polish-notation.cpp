class Solution {
public:
int evalRPN(vector<string>& tokens) {
        stack<long> vals;
     for(int i=0;i<tokens.size();i++){
         
        if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                long b = vals.top();
                vals.pop();
                long a = vals.top();
                vals.pop();
                if(tokens[i] == "+") vals.push(a+b);
                else if(tokens[i] == "-") vals.push(a-b);
                else if(tokens[i] == "*") vals.push(a*b);
                else vals.push(a/b);
         }
        else
                vals.push(stoi(tokens[i]));
    }
        return vals.top();    
    }
};
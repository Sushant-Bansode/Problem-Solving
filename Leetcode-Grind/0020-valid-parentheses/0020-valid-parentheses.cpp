class Solution {
public:
    bool isValid(string s) {
     if(s.length( ) & 1) {return false;}   
     stack<char>st;
    // To Avoid Runtime Error... Of Checking for the Empty Stack when not pushed Yet is in the last of string..
        st.push('s');
        for(int i = 0; i< s.length( ); ++i){
          if(s[i] == '(' ||s[i] == '{' ||s[i] == '['){
              st.push(s[i]);
          }
      else if(s[i] == ')' && st.top( ) == '(' ||s[i] == '}' && st.top( ) == '{' ||s[i] == ']' && st.top( ) == '['){
         st.pop( );
      }else if(s[i] == ')' && st.top( ) != '(' ||s[i] == '}' && st.top( ) != '{' ||s[i] == ']' && st.top( ) != '['){
    return false;
        }
}
  return (st.size( )==1);      
    }
};
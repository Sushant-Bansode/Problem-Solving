This Says it All Push all the Opening Brackets in the Stack and then, After Pushing opening Brackets Simultaneously Keep checking if Closing Bracket Found as s[i] then it is in synchronized with the, stack.top....
if(s[i] == '(' ||s[i] == '{' ||s[i] == '['){
st.push(s[i]);
}
else if(s[i] == ')' && st.top( ) == '(' ||s[i] == '}' && st.top( ) == '{' ||s[i] == ']' && st.top( ) == '['){
st.pop( );
}else if(s[i] == ')' && st.top( ) != '(' ||s[i] == '}' && st.top( ) != '{' ||s[i] == ']' && st.top( ) != '['){
return false;
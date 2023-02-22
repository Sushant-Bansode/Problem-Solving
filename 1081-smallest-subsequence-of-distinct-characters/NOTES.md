Map based approach:
Things to remember while adding or removing a character in the final string (fi)
Add the character if it is not present in the string till now.
Remove if:
​
Their are more occurances of the same character ahead (Check using map)
​
Next character in string s (s[i]) is greater than the last character in final string.
​
s[i] is not present in the final string already.
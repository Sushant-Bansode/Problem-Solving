class Solution {
public:
string addBinary(string a, string b) {
// first of all adding binary numbers it's exactly like adding decimal numbers
// You just need to remaber that you're restrected to only 0 and 1 digit.
// as an example 1 + 1 in decimal is 2 but in binary it's 10, so we but 0 and carry 1.
string res;
int carry = 0, i = a.size(), j = b.size();
while(i > 0 || j > 0 || carry == 1)
{
// Here we save carry by subtract by '0' to convert the numbers from a char type into an int (ASCII)
if (i > 0) carry += a[--i] - '0';
if (j > 0) carry += b[--j] - '0';
// Here we add the firt digit to the result string
res += char(carry % 2 + '0');
// Divide Carry by 2 to remove the saved value in the result string
carry /= 2;
}
// Reverse to get the right order in the result...
reverse(res.begin(), res.end());
return res;
}
};
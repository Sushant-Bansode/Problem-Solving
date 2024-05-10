int gcd(int a, int b){
if(a == 0)
return b;
return gcd(b%a, a);
}
Eulers Formula for Calculation of GCD,  and then applying multiplction of 2 no/ gcd = lcm.
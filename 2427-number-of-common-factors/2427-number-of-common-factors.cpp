class Solution {
public:
    int commonFactors(int a, int b) {
       int i = 1;
        int t = min(a,b);
        int count = 0;
        while(i<=t){
            if(a%i ==0 && b%i==0){
                count+=1;
            }
            i++;
        }
    return count;
    }
};
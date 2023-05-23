class Solution {
public:
    double ronakSqrt(int n)
    {
        if(n<2)
            return double(n);
        double sqrt = n / 2;
        double temp = 0;
        while(sqrt != temp){
            temp = sqrt;
            sqrt = ( n/temp + temp) / 2;
        }
        return sqrt;
    }

    bool isPerfectSquare(int num) 
    {
        double a=ronakSqrt(num);
        double b=ceil(ronakSqrt(num));
        cout<<a<<endl<<b<<endl;
        if(a == b)
            return true;
        return false;
    }
};
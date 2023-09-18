class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        vector<double> ans;
        double min = INT_MAX, max = INT_MIN,sum=0,a=0,mode=0,modeval=0,median=0;
        for(int i=0; i<256; i++){
            if(count[i]!=0){
                if(i<min) min =i;
                if(i>max) max = i;
                sum += (long) count[i]*i;
                a+=count[i];
                if(count[i]>modeval) {
                    modeval = count[i];
                    mode = i;
                }
            }
        }
        ans.push_back(min);
        ans.push_back(max);
        ans.push_back(sum/a);
        if(int(a)&1){
            int n= a/2+1,c=0;
            for(int i=0; i<256; i++){
                c+=count[i];
                if(c>=n){
                    median = i;
                    break;
                }
            }
        }
        else{
            int n= a/2,c=0;
            for(int i=0; i<256; i++){
                c+=count[i];
                if(c>n){
                    median = i;
                    break;
                }
                else if(c==n){
                    double a = i,b;
                    i++;
                    while(i<256){
                        if(count[i]>0){
                            b=i;
                            median = (a+b)/2;
                            break;
                        }
                        i++;
                    }
                    break;
                }
            }
        }
        ans.push_back(median);
        ans.push_back(mode);
        return ans;
    }
};
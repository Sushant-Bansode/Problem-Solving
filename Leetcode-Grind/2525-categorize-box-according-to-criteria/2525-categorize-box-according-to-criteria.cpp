class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
    long long l1 = length, w1 = width, h1 = height;  
    long long vol=l1*w1*h1;
       bool isbulky=false, isheavy=false;
        if(length>=10000 || width>=10000 || height>=10000 || vol>=1e9){
            isbulky=true;
        }
        if(mass>=100){
           isheavy=true;
        }
        
        if(isbulky && isheavy){
           return "Both";
        }
        if(!isheavy && !isbulky){
            return "Neither";
        }
        if(isbulky && !isheavy){
            return "Bulky";
        }
        return "Heavy";
    }
};
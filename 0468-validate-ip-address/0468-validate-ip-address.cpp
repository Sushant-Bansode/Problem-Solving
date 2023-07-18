class Solution {
public:


   bool validateipv4(string str){

       if(str[0]=='.'){ return false; }
 int n= str.size(); 
       if(str[n-1]=='.'){ return false; }
    for(int i{0};i<n-1;i++){
        if(str[i]=='.' && str[i+1]=='.'){ return false;}
    }

    vector<string>vect; int start=0; 
    string validate="";

    while(start<str.size()){
       if(str[start]=='.' ){ vect.push_back(validate); validate=""; 
       start++; continue; }

       validate+=str[start];  
       if(start==str.size()-1){ vect.push_back(validate); }
       start++; 
    }

    for(auto it=vect.begin();it!=vect.end();it++){
        string temp=*it;

        if(temp.size()>4){ return false; } 

        for(auto iter=temp.begin();iter!=temp.end();iter++){
            char ch=*iter; 
        if( !(ch>='0' && ch<='9')){ return false; }
        }
        
        if(temp[0]=='0' && temp.size()>1){ return false; }
        if(stoi(temp) > 255){ return false; }
        

        
    }

   return true; 

   }


   bool validateipv6(string str){
 
       if(str[0]==':'){ return false; }
 int n= str.size(); 
       if(str[n-1]==':'){ return false; }
    for(int i{0};i<n-1;i++){
        if(str[i]==':' && str[i+1]==':'){ return false;}
    }

 vector<string>vect; int start=0; 
    string validate="";

    while(start<str.size()){
       if(str[start]==':' ){ vect.push_back(validate); validate=""; 
       start++; continue; }

       validate+=str[start];  
       if(start==str.size()-1){ vect.push_back(validate); }
       start++; 
    }

      for(auto it=vect.begin();it!=vect.end();it++){

        string temp= *it; 

        if(temp.size()>4){ return false; }
        for(auto iter=temp.begin();iter!=temp.end();iter++){
            char ch= *iter;
            if( !( (ch>='a' && ch<='f') || (ch>='A' && ch<='F') || (ch>='0' && ch<='9'))){
                return false; 
            }
        }

      }

     return true; 
   }

    string validIPAddress(string queryIP) {
        
        int countdot=0; 
        int countsemi=0; 

       for(int i{0};queryIP[i]!='\0';i++){
           if( queryIP[i]=='.'){countdot++; }
           if(queryIP[i]==':'){countsemi++;}
       }

       if(countdot>0 && countsemi>0){ return "Neither"; }

       if(countsemi==0 &&countdot!=3 ){ return "Neither"; }
       if(  countdot==0 && countsemi!=7 ){ return "Neither"; }

       if(countsemi==0){
           if(validateipv4(queryIP)){ return "IPv4";}
           else{ return "Neither";}
       }

       if(validateipv6(queryIP)){ return "IPv6";}
       return "Neither";

    }
};
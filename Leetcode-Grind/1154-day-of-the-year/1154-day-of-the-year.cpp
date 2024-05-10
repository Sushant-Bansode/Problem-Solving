class Solution {
public:
    int dayOfYear(string date) {
  int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   int year = stoi(date.substr(0,4));
   int month = stoi(date.substr(5,7));
   int day = stoi(date.substr(8,10));
     if(month > 2 && year % 4 == 0 && (year % 100 !=0 || year % 400 == 0)){
         days[1]++;
     }
     int m = 1;   
     while(m < month){
       day += days[m-1];   
      m++;   
     }
  return day;     
    }
};
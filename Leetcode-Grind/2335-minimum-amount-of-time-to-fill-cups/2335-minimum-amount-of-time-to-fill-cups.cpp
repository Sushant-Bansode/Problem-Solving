class Solution {
public:
    int fillCups(vector<int>& amt) {
        priority_queue<int> pq;
        pq.push(amt[0]);
        pq.push(amt[1]);
        pq.push(amt[2]);
    int total = 0;
    while(1){
        int a = pq.top( );
        pq.pop( );
        int b = pq.top( );
        pq.pop( );
        
     if(a == 0 || b == 0){
         total += (a+b);
        return total; 
     }else{
         total++;
         a--;
         b--;
         pq.push(a);
         pq.push(b);
     }   
    }    
   return 0;     
    }
};
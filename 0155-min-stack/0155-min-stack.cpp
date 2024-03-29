class MinStack {
public:
  vector<int> st;  
    
    MinStack() {
        
    }
    
    void push(int val) {
  st.push_back(val);      
    }
    
    void pop() {
  if(st.size( ) == 0) {
   return;  
 }else{
    st.pop_back( );
  }       
    }
    
    int top() {
 return st[st.size( )- 1];       
    }
    
    int getMin() {
         if(st.size() == 0) {
             return -1;
         }
    int minelement = st[0];
    priority_queue <int, vector<int>, greater<int> > pq;
   for (int i = 0; i < st.size( ); i++){
        pq.push(st[i]);
    }
  minelement = pq.top( );   
     return minelement;      
    }     
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
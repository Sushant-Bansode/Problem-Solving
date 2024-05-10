class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>res;
        for(int i=0;i<asteroids.size();i++){
            while(res.size()>0 && i<asteroids.size() && res.back()>0 && asteroids[i]<0){
                if(abs(res.back())>abs(asteroids[i])){
                    i++;
                }
                else if(abs(res.back())<abs(asteroids[i])){
                    res.pop_back();
                }
                else{
                    res.pop_back();
                    i++;
                }
            }
            if(i<asteroids.size())res.push_back(asteroids[i]);
                       
        }
        
        return res;
    }
};
class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        map<char,int> mp;
        for(int i=0 ; i<n ; ++i) mp[secret[i]]++;
        int bulls = 0;
        int cows  = 0;
        for(int i=0 ; i<n ; ++i){
            if(secret[i] == guess[i]){
                ++bulls;
                if(mp[guess[i]] == 1) mp.erase(guess[i]);
                else mp[guess[i]]--;        
                guess[i] = '*';
            }
        } 
        for(int i=0 ; i<n ; ++i){
            if(guess[i] != '*'){
                if(mp.find(guess[i]) != mp.end()){
                    ++cows;
                    if(mp[guess[i]] == 1) mp.erase(guess[i]);
                    else mp[guess[i]]--;
                }
            }
        }  
        string ans = to_string(bulls) + "A" + to_string(cows) + "B";
        return ans;
    }
};
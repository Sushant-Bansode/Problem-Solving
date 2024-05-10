class Solution {
public:
    void rec(string &tiles, unordered_set<string> &s, vector<bool> &check, string cur){
        for(int i = 0;i<tiles.size();i++){
            if (!check[i]){
            cur+= tiles[i];
            s.insert(cur);
            check[i]=true;
            rec(tiles, s, check, cur);
            check[i]=false;
            cur.pop_back();
            }
        }
    }
    int numTilePossibilities(string tiles) {
        unordered_set<string> s;
        vector<bool> check(tiles.size(),false);
        rec(tiles,s, check,"");
        return s.size();
    }
};
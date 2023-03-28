class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int s1=(p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]);
        int s2=(p1[0]-p3[0])*(p1[0]-p3[0])+(p1[1]-p3[1])*(p1[1]-p3[1]);
        int s3=(p3[0]-p2[0])*(p3[0]-p2[0])+(p3[1]-p2[1])*(p3[1]-p2[1]);
        int s4=(p3[0]-p4[0])*(p3[0]-p4[0])+(p3[1]-p4[1])*(p3[1]-p4[1]);
        int s5=(p1[0]-p4[0])*(p1[0]-p4[0])+(p1[1]-p4[1])*(p1[1]-p4[1]);
        int s6=(p4[0]-p2[0])*(p4[0]-p2[0])+(p4[1]-p2[1])*(p4[1]-p2[1]);
        map<int, int>m;
        int cnt1=-1, cnt2=-1, side, diag;
        m[s1]++;
        m[s2]++;
        m[s3]++;
        m[s4]++;
        m[s5]++;
        m[s6]++;
        
        if(m.size( ) == 2 && m.begin( )->first != 0 && m.rbegin( )->first != 0)         {
            return true;
        }
        
        return false;
    }
};
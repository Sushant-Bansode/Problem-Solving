class Solution {
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
{
    //sorting target array
    sort(target.begin(), target.end());
    //sorting arr array
    sort(arr.begin(), arr.end());
    //checking if equal....
    return (target == arr);    
}
};
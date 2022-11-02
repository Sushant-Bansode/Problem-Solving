class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
           vector <int> arr(m+n);
        int i = 0;
        int j = 0;
        int e = 0;
        while(i < m && j < n)
        {
            if(nums1[i] < nums2[j])
            {
                arr[e++] = nums1[i++];
            }
            else if(nums2[j] < nums1[i])
            {
                arr[e++] = nums2[j++];
            }
            else
            {
                arr[e++] = nums1[i];
                arr[e++] = nums1[i];
                i++;
                j++;
            }
        }
        while(i < m)
        {
            arr[e++] = nums1[i++];
        }
        while(j < n)
        {
            arr[e++] = nums2[j++];
        }
        for(int k = 0 ; k < arr.size(); k++)
        {
            nums1[k] = arr[k];
        }  
    }
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        int ans[n+m];
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans[k] = nums1[i];
                ++i;
                ++k;
            }else{
                ans[k] = nums2[j];
                ++k;
                ++j;
            }
        }
        while(i<m){
            ans[k] = nums1[i];
            ++i;
            ++k;
        }
        while(j<n){
            ans[k] = nums2[j];
            ++j;
            ++k;
        }
        for(int i=0;i<n+m;++i){
            nums1[i] = ans[i];
        }
    }
};
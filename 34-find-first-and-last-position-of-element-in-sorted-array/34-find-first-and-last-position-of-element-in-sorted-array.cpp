class Solution {
public:
    int firstoccur(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                if(mid==0 || nums[mid]!=nums[mid-1]){
                    return mid;
                }else{
                    high = mid-1;
                }
            }else if(nums[mid]>target){
                high = mid-1;
            }else if(nums[mid]<target){
                low= mid+1;
            }
        }
        return -1;
    }
    
    int lastoccur(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                if(mid==nums.size()-1 || nums[mid]!=nums[mid+1]){
                    return mid;
                }else{
                    low = mid+1;
                }
            }else if(nums[mid]>target){
                high = mid-1;
            }else if(nums[mid]<target){
                low= mid+1;
            }
        }
        return -1;      
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstoccur(nums,target));
        ans.push_back(lastoccur(nums,target));
        return ans;
    }
};
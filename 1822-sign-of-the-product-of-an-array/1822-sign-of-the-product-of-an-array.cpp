class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;
        int zero = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<0){
                neg++;
            }else if(nums[i]==0){
                zero++;
            }
        }
        if(zero!=0){
            return 0;
        }else if(zero==0 && neg%2==0){
            return 1;
        }else{
            return -1;
        }
    }
};
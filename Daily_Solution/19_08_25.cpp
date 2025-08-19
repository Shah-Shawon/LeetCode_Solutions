class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count =0,flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                flag++;
                count+=flag;
            }else{
                flag=0;
            }
        }
        return count;
    }
};

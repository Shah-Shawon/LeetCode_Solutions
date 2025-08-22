class NumArray {
public:
    vector<int>numArray;
    NumArray(vector<int>& nums) {
        numArray.resize(nums.size()+1,0);
        for(int i=1;i<=nums.size();i++){
            numArray[i] = nums[i-1]+numArray[i-1];
        }
        
    }
    
    int sumRange(int left, int right) {
        return numArray[right+1]-numArray[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

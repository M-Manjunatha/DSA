class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       // Step1: Remove Negative numbers and zero
        nums.erase(remove_if(nums.begin(),nums.end(),[](int n) {return n<=0;}),nums.end());
        sort(nums.begin(),nums.end());

        //Step 2: Compare the target with elements.
        int target=1;
        for(int i : nums){
            if(i==target){
                target++;
            }
            else if(i>target){
                    return target;
            }
        }
        return target;
    }
};
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long count=0, streak=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){                 
                streak++;
                count+=streak;
            }else{
                streak=0;
            }
        }

       return count;
        }
};

// Explianation:(streak++,count=count+streak) 
//for [1,3,0,0,2,0,0,4]
// streak=1, count=1
// streak=2, count=3
// streak=1,count=4
// streak=2, count=4+2

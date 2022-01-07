// the following is the solution for the question to find 
// the maximum number of consecutive ones in a binary array 

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int highCounter{0},currentCounter{0}; 
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) 
            {
                currentCounter++; 
                highCounter=max(currentCounter,highCounter);
            }
            if(nums[i]==0) {
                currentCounter= 0; // the consecutive substrign ends 
                // reset the current counter to 0 
            }  
        }
        return highCounter;
    }
};
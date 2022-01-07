// solution for the question 
// ** Given an integer array nums sorted in non-decreasing order,
// ** return an array of the squares of each number sorted in non-decreasing order.
// the question is given under the Array 101 section on Leetcode 



// get two pointers , one pointing to the negatively largest (least element) of the array 
// another pointing to the positively largest (maximum element )  of the array
// check the absolute value of both and compare them 
// append the square of the larger value to the end of the square array 
// and move the pointer for the used value 

class Solution {
    public:
    vector<int> sortedSquares(vector<int>& nums) {
       int left=0; 
       int right=nums.size()-1; 
       int squareIndex=nums.size()-1;
       vector<int>squareSorted(nums.size());
       for(int i=1;i<=nums.size();i++)
       {
           if(abs(nums[left]) > abs(nums[right])) 
           {
               squareSorted[nums.size()-i]= pow(nums[left],2);
               left++; 
           }
           else 
           {
               squareSorted[nums.size()-i]= pow(nums[right],2);
               right--; 
           }
       }
       return squareSorted; 
    }
};
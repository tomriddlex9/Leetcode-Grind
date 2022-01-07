// the following is the solution for the question 
// ** counting the number having even number of digits in a given array 
// the question is covered under the section Array 101 on leetcode 


class Solution {
public:
    int countDigit(int n)
    {
        int digitCounter=1; 
        while(n>9)
        {
            n/=10;
            digitCounter++; 
        }
        return digitCounter; 
    }
    int findNumbers(vector<int>& nums) 
    {
        int evenCounter=0; 
        for(int x : nums )
        {
          if((countDigit(x)%2)==0) evenCounter++;
        }      
        return evenCounter; 
    }
};
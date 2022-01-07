
/* * The problem can either be solved by a nested 
loop that first checks for the first value and then
searches the array for (target-arr[i]) in the array
 
 This approach gives us the complexity of O(n^2) for all cases 


 *  The above solution can be fixed by first sorting the array 
  using quick sort and then do the above stated process
 
 This approach reduces the complexity for certain cases but 
 still the worst case complexity is O(n^2)


 * An optimised solution to the problem would be to use hashing and storing all
 the values in an unordered set and then traverse the array/vector and search 
 the map for (target-arr[i])
 
 This approach reduces the complexity to O(n)

*/
#include<bits/stdc++.h> 
#ifndef twosum.h 
#define twosum.h 

using namespace std; 
vector<int> twoSum(vector<int>& nums,int target)
{
    unordered_set<int> s; 
    vector<int> answer(2); 
    for(int x: nums){
        int temp=target-x;
        if(s.find(temp)!=s.end()){
            answer.push_back(x); 
            answer.push_back(temp);
        }
        s.insert(x);
    }
    return answer;
}
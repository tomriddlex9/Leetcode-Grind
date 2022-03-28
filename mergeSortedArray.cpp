// problem question link:
// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3253/

#include<iostream> 
#include<vector>
using namespace std;
// can be solved in m+n space and O(m+n) time complexity 
// but since we have to do it in-place 
// the solution we need to try should not use any extra space 

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> temparray; 
    for(int i=0,j=0;i+j!=m+n;){
        if(i==m){
            temparray.push_back(nums2[j]);
            j++; 
        }
        if(j==n){
            temparray.push_back(nums1[i]);
            i++;
        }
        if(nums1[i]<=nums2[j]){
            temparray.push_back(nums1[i]); 
            i++; 
        }
        else {
            temparray.push_back(nums2[j]);
            j++; 
        }
    }
    // copy the data into the original array 
    for(int x=0;x<m+n;x++){
        nums1[x]=temparray[x];
    }    
}
int main()
{
    vector<int>arr1={1,2,3,0,0,0}; 
    vector<int>arr2={2,5,6}; 
    int m{3},n{3};
    merge(arr1,m,arr2,n);
    for(int x:arr1) cout<<x<<" "; 
    cout<<endl;
}
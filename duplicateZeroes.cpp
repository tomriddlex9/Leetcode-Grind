#include<bits/stdc++.h> 
using namespace std;
void duplicateZeroes(vector<int>& array){
    int n=(int)array.size(); 
    int zeroCounter{0},untillCounter{n}; 
    for(int i=0;i<n;i++) {
        if(array[i]==0) { 
            untillCounter--; 
        }
    }
    // counted the number of zeroes in the array 
    // now create temp array and make the changes 
    vector<int>tempArray(n); 
    for(int i{0},j{0};i<untillCounter;i++){
        if(array[i]==0){
            tempArray[j]=0;
            tempArray[j+1]=0; 
            j+=2; 
        }
        else{
            tempArray[j]=array[i]; 
            j++;
        }
    }
    // copy back all the data back to the original array 
    for(int i=0;i<n;i++) array[i]=tempArray[i]; 
}
int main()
{
    vector<int>array={1,2,0,3,0,4,5,0};
    duplicateZeroes(array); 
    for(int x:array){
        cout<<x<<" "; 
    }
    cout<<endl;
}
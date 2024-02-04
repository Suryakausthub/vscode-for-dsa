/*
Problem Description
 
 

Given an unsorted integer array, find the first missing positive integer.
Your algorithm should run in O(n) time and use constant space.


Problem Constraints
1 <= |A| <= 106
-106 <= Ai <= 106


Input Format
The first argument is an integer array A.


Output Format
Return an integer equal to the first missing positive integer


Example Input
Input 1:
A = [1,2,0]
Input 2:
A = [3,4,-1,1]
Input 3:
A = [-8,-7,-6]


Example Output
Output 1:
3
Output 2:
2
Output 3:
1


Example Explanation
Explanation 1:
3 is the first positive missing integer.
Explanation 2:
2 is the first positive missing integer.
Explanation 3:
1 is the first positive missing integer.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Solution::firstMissingPositive(vector<int> &A) {
    int n1 = A.size();
    
    sort(A.begin(), A.end());
    
    int max =0;
    for(int i=0; i<n1;i++ ){
        if(max< A[i]){
            max = A[i];
        }
    }
    
    if(max <=0){
        return 1;
    }   
    
    for(int i=0; i<n1; i++){
        if(A[i]!=i+1){
            return i+1;
        }
    }
}

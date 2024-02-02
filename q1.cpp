/*You're given a read-only array of N integers. Find out if any integer occurs more than N/3 times in the array in linear time and constant additional space.
If so, return the integer. If not, return -1.

If there are multiple solutions, return any one.



Problem Constraints
1 <= N <= 7*105
1 <= A[i] <= 109


Input Format
The only argument is an integer array A.


Output Format
Return an integer.


Example Input
[1 2 3 1 1]


Example Output
1


Example Explanation
1 occurs 3 times which is more than 5/3 times.*/
#include<iostream>
#include<vector>
using namespace std;

int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> result;
    
    for(int i=0; i<n; i++){
        int count = 1;

        for(int j=i+1; j<n; j++){
            if(A[i]==A[j]){
                count =count +1;
            }
        }
        if(count >= n/3){
            result.push_back(A[i]);
        }
    }
    for(int k : result){
        return k;
    }
    return -1;
}




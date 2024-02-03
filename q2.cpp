/*You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int repeatedNumber = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] == A[j]) {
                repeatedNumber = A[i];
                break;
            }
        }
    }

    int total = (n * (n + 1)) / 2;
    for (int k = 0; k < n; k++) {
        total = total - A[k];
    }

    int missingNumber = total + repeatedNumber;

    return {repeatedNumber, missingNumber};
}

/*
There are 
�
N students standing in a row and numbered 
1
1 through 
�
N from left to right. You are given a string 
�
S with length 
�
N, where for each valid 
�
i, the 
�
i-th character of 
�
S is 'x' if the 
�
i-th student is a girl or 'y' if this student is a boy. Students standing next to each other in the row are friends.

The students are asked to form pairs for a dance competition. Each pair must consist of a boy and a girl. Two students can only form a pair if they are friends. Each student can only be part of at most one pair. What is the maximum number of pairs that can be formed?

Input
The first line of the input contains a single integer 
�
T denoting the number of test cases. The description of 
�
T test cases follows.
The first and only line of each test case contains a single string 
�
S.
Output
For each test case, print a single line containing one integer ― the maximum number of pairs.

Constraints
1
≤
�
≤
100
1≤T≤100
1
≤
�
≤
1
0
5
1≤N≤10 
5
 
∣
�
∣
=
�
∣S∣=N
�
S contains only characters 'x' and 'y'
the sum of 
�
N over all test cases does not exceed 
3
⋅
1
0
5
3⋅10 
5
 
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
3
xy
xyxxy
yy
1
2
0
Explanation:
Example case 1: There is only one possible pair: (first student, second student).

Example case 2: One of the ways to form two pairs is: (first student, second student) and (fourth student, fifth student).

Another way to form two pairs is: (second student, third student) and (fourth student, fifth student).
*/#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string S;
        cin >> S;
        
        int pairs = 0;
        for (int i = 0; i < S.length() - 1; ++i) {
            if (S[i] != S[i + 1]) {
                pairs++;
                i++; 
            }
        }
        
        cout << pairs << endl;
    }
    
    return 0;
}

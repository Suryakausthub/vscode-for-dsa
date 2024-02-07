/*Turbo Sort
Given a list of numbers, you have to sort them in non decreasing order.

Input Format
The first line contains a single integer, 
�
N, denoting the number of integers in the list.
The next 
�
N lines contain a single integer each, denoting the elements of the list.
Output Format
Output 
�
N lines, containing one integer each, in non-decreasing order.

Constraints
1
≤
�
≤
1
0
6
1≤N≤10 
6
 
0
≤
0≤ elements of the list 
≤
1
0
6
≤10 
6
 
Sample 1:
Input
Output
5
5
3
6
7
1
1
3
5
6
7*/
#include<iostream>
using namespace std;

int N, A[1000001];

int main()
{
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> A[i];
    sort(A + 1, A + N + 1);
    for(int i = 1; i <= N; i++)
        cout << A[i] << endl;
}

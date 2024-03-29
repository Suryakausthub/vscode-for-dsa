/*Devu and friendship testing
Read problems statements in Mandarin Chinese and Russian as well.
Devu has n weird friends. Its his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on dith day.

Devu despite being as rich as Gatsby, is quite frugal and can give at most one grand party daily. Also, he wants to invite only one person in a party. So he just wonders what is the maximum number of friendships he can save. Please help Devu in this tough task !!

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
First line will contain a single integer denoting n.
Second line will contain n space separated integers where ith integer corresponds to the day dith as given in the problem.
Output
Print a single line corresponding to the answer of the problem.

Constraints
1 ≤ T ≤ 104
1 ≤ n ≤ 50
1 ≤ di ≤ 100
Sample 1:
Input
Output
2
2
3 2
2
1 1
2
1
Explanation:
Example case 1. Devu can give party to second friend on day 2 and first friend on day 3, so he can save both his friendships.

Example case 2. Both the friends want a party on day 1, and as the Devu can not afford more than one party a day, so he can save only one of the friendships, so answer is 1.*/
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int k;
        cin >> k;
        int A[k];
        
         for (int j = 0; j < k; j++) {
            cin >> A[j];
        }
        
        int count =0;
        for(int i=0; i<k; i++){
            bool friend1 = true;
            for(int j=0; j<i; j++){
                if(A[i]== A[j]){
                    friend1 = false;
                    break;
                }
            }
            if(friend1){
                count ++;
            }
        }
        cout << count<< endl;
    }
    
}
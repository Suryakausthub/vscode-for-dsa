#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
}

void bubblesort(int arr[], int n){
    int issorted = 0;
    for(int i=0; i<n-1; i++){
        cout << "working for the " << i << " pass " <<endl;
        issorted =1;
        for(int j=0; j< n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                issorted = 0;
            }
        }
    if(issorted){
        return;
    }
    }
}

int main(){
    int arr[6] = {9,8,7,6,5,4};
    int n = 6;
    printarray(arr,n);
    bubblesort(arr,n);
    cout << endl;
    printarray(arr,n);
}

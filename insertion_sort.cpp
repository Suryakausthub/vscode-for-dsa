#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionsort(int arr[] , int n){
    int key, j;
    for(int i=1; i<n; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {12,54,65,7,13};
    int n = 5; 
    printarray(arr, n);
    
    insertionsort(arr, n);
    
    printarray(arr, n);
    
    return 0;
}

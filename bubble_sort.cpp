#include<iostream>
using namespace std;
int bubble_sort(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[5] = {12 , 53 , 23 , 3 , 78};
    int n=5;
    bubble_sort(arr , n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

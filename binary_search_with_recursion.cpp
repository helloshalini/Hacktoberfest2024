#include<iostream>
#include<vector>
using namespace std;
int recBinarySearch(vector<int>arr , int tar){
    int st ;
    int end;
    int mid;

    if(st<=end){
        int mid = st+(end - st)/2;

        if(tar>arr[mid]){
            return recBinarySearch(arr , tar , mid+1 , end);
        }else if(tar<arr[mid])
        {
            return recBinarySearch(arr , tar , mid-1 , st);
        }else
        {
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={-2,4,5,6,9,12};
    int tar = 12;
    cout<<recBinarySearch(arr , tar)<<endl;
    return 0;
}

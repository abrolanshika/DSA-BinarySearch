//find how many times a sorted array is rotated
#include<bits/stdc++.h>
using namespace std;
int findkrotation(int arr[],int n){
    
    int start=0;
    int end=n-1;
    
    while(start<=end){
        if(arr[start]<=arr[end]){
            return start;
        }
        int mid=start+end/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
            return mid;
        else if(arr[mid]>arr[start])
            start=mid+1;

        else if(arr[mid]<=arr[end])
            end=mid-1;
        }
    
    return -1;
}
int main(){
    int n;
    int res;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     res=findkrotation(arr,n);
    cout<<"Array is rotated "<<res<<" times";
}
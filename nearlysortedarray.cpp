//search an element in a nearly sorted array
#include<bits/stdc++.h>
using namespace std;
int nearlybs(int arr[],int elt,int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==elt)
        return mid;
        else if((mid-1)>=start && arr[mid-1]==elt)
        return mid-1;
        else if((mid+1)<=end && arr[mid+1]==elt)
        return mid +1;
        else if(arr[mid]<elt)
        start=mid+2;
        else
         end=mid-2;
    }
    return -1;
}
int main(){
    int n;
    int elt;
    int res;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to find in a nearly sorted array:";
    cin>>elt;
    res=nearlybs(arr,elt,n);
     if(res==-1)
     cout<<"Element is not present";
     else
    cout<<"Element is present at index "<<res;
}
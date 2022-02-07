#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int elt,int n){
    int start=0;
    int end = n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==elt)
        return mid;
        else if(arr[mid]>elt)
        end=mid-1;
        else
        start=mid+1;
    }
    return -1;
}
int main(){
    int n;
    int elt;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to find: ";
    cin>>elt;
    int res=binary_search(arr,elt,n);
    if(res==-1)
    cout<<"Element is not present in the array";
    else
    cout<<"Element is present at index "<<res<<" in the array";


}
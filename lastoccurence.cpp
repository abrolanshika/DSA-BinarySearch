#include<bits/stdc++.h>
using namespace std;
int lastoccurence(int arr[],int elt,int n){
    int start=0;
    int end = n-1;
    int temp;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==elt){
          temp=mid;
          start=mid+1;
        }
        else if(arr[mid]>elt)
        end=mid-1;
        else
        start=mid+1;
    }
    return temp;

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
    cout<<"Enter the element you want to find: ";
    cin>>elt;
     res=lastoccurence(arr,elt,n);
    
    if(res==-1)
    cout<<"Element is not present in the array";
    else
    cout<<"Last occurence of "<<elt<<" is at index "<<res<<" in the array";


}
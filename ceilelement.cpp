//find ceil of the element in a sorted array
#include<bits/stdc++.h>
using namespace std;
int ceilbs(int arr[], int elt,int n){
    int start=0;
    int end=n-1;
    int res=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==elt)
        return mid;
        else if(arr[mid]<elt){
            
            start=mid+1;
        }
        else{
            res=mid;
        end=mid-1;
        }
    }
    return res;
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
    cout<<"Enter the element to be searched:";
    cin>>elt;
    int ans=ceilbs(arr,elt,n);
    cout<<"Ceil of the element is: "<<arr[ans]<<endl;
}
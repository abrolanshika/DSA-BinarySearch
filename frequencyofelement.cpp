//find the frequency of element in the array
#include<bits/stdc++.h>
using namespace std;
int firstoccurence(int arr[],int elt,int n){
    int start=0;
    int end = n-1;
    int temp=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==elt){
          temp=mid;
          end=mid-1;
        }
        else if(arr[mid]>elt)
        end=mid-1;
        else
        start=mid+1;
    }
    return temp;

}
int lastoccurence(int arr[],int elt,int n){
    int start=0;
    int end = n-1;
    int temp=-1;
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
    cout<<"Enter the element to be searched: ";
    cin>>elt;
    int r1=firstoccurence(arr,elt,n);
    int r2=lastoccurence(arr,elt,n);
    res=r2-r1+1;
    if(res==1){
        cout<<"Frequency of element is 0";
    }
    else
    cout<<"Frequency of element is "<<res;
}
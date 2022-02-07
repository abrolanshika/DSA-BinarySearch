//find the minimum difference element in an array
#include<bits/stdc++.h>
using namespace std;
int mindiff_bs(int arr[],int elt,int n){
    int start=0;
    int end = n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==elt)
        return arr[mid];
        else if(arr[mid]>elt)
        end=mid-1;
        else
        start=mid+1;
    }
    int c=abs(arr[start]-elt);
    int c2=abs(arr[end]-elt);
    if(c>c2)
    return arr[end];
    else
    return arr[start];
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
    int res=mindiff_bs(arr,elt,n);
    
    cout<<"The element which gives minimum difference is " <<res<<endl;


}
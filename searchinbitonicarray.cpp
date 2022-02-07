//find the element in a bitonic array
#include<bits/stdc++.h>
using namespace std;

int bitonic_bs(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid>0 && mid<n-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return mid;
            else if(arr[mid-1]>arr[mid])
            end=mid-1;
            else
            start=mid+1;
        }
        else if(mid==0){
            if(arr[0]>arr[1])
            return 0;
            else
            return 1;
        }
        else if(mid==n-1)
        {
            if(arr[n-1]>arr[n-2])
            return n-1;
            else
            return n-2;
        }
    }
    return -1;
}
int bs_asc(int arr[],int start,int end,int elt){
    
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

int bs_desc(int arr[],int start,int end,int elt){
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==elt)
        return mid;
        else if(arr[mid]<elt)
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
    cout<<"Enter the element to be searched: ";
    cin>>elt;
  int index=bitonic_bs(arr,n);
  int a=bs_asc(arr,0,index-1,elt);
  int b=bs_desc(arr,index,n-1,elt);
  if(a!=-1)
  cout<<"The element is present at index "<<a;
  else if(b!=-1)
  cout<<"The element is present at index "<<b;
    else
    cout<<"The element is not present";


}
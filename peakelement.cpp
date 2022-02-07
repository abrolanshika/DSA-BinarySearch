//find the peak element in teh array i.e. element which is greater than both of its neighbours.
#include<bits/stdc++.h>
using namespace std;

int peak_bs(int arr[],int n){
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
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  int res=peak_bs(arr,n);
    
    cout<<"The peak element is " <<arr[res]<<endl;


}
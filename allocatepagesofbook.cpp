//minimize the maximum number of pages read by a student
#include<bits/stdc++.h>
using namespace std;

bool isvalid(int arr[],int n,int k, int m){
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
        if(sum>m){
            student ++;
            sum=arr[i];
        }
            if(student>k)
        return false;
        }
    return true;
}
int bs(int arr[],int n,int k){
    int sum=0;
    int mx=-1;
    for(int i=0;i<n;i++){
            sum+=arr[i];
            mx=max(mx,arr[i]);
        }
    
    int start=mx;
    int end=sum;
      int res=-1;
    if(n<k)
    return -1;
  
    while(start<=end){
        int mid=(start+end)/2;
        if(isvalid(arr,n,k,mid)==true){
            res=mid;
            end=mid-1;
        }
        else
        start=mid+1;
    }
    return res;
}
int main(){
    int n;
    int k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of students: ";
    cin>>k;
  
  int res=bs(arr,n,k);
    cout<<"Minumum number of pages is:"<<res;


}
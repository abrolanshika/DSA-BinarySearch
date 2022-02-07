#include<bits/stdc++.h>
using namespace std;
int pivotedbs(int arr[],int elt,int n){
     int start=0;
		    int end=n-1;
		    while(start<=end){
		        int m=start+((end-start)/2);
		        if(arr[m]==elt){
		            return m;
		        }
            if(arr[m]>=arr[start]){
		            if(arr[m]>=elt && arr[start]<=elt)
		            {
		            end=m-1;
		            }
		            else
		            start=m+1;
		        }
		        else {
		            if(elt>=arr[m]&& elt<=arr[end])
		                start=m+1;
		          else{
		                    end=m-1;;  
		                }
		        }
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
    cout<<"Enter the element you want to find in a rotated sorted array:";
    cin>>elt;
    res=pivotedbs(arr,elt,n);
     if(res==-1)
     cout<<"Element is not present";
     else
    cout<<"Element is present at index "<<res;
}
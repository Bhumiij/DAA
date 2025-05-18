#include<iostream>
using namespace std;
int binary_search(int a[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==k){
            return 1;
        }
        else if(a[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,i;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the key : ";
    cin>>k;
   int res= binary_search(a,n,k);
   if(res!=-1){
    cout<<"Element found at : "<<res;
   }
   else{
    cout<<"Element not found";
   }
    return 0;
}
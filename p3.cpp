#include<bits/stdc++.h>
using namespace std;
int exponential_search(int a[],int n,int k){
int step=sqrt(n);
int prev=0;
while(a[min(step,n)-1]<k){
    prev=step;
    step+=sqrt(n);
    if(prev>=n){
        return -1;
    }
    }for(int i=prev;i<min(step,n);i++){
       if(a[i]==k)
       {
        return i;
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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the key : ";
    cin>>k;
   int res= exponential_search(a,n,k);
   if(res!=-1){
    cout<<"Element Found at : "<<res;
   }
   else{
    cout<<"Element not found";
   }
    return 0;
}
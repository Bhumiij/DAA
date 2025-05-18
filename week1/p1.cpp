#include<iostream>
using namespace std;
void linear_search(int a[],int n,int k){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==k){
            cout<<"Element found at i :"<<i;
            break;
        }
        else{
            cout<<"Not Found";
        }
    }
}
int main(){
    int n,i;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the key : ";
    cin>>k;
    linear_search(a,n,k);
    return 0;
}
#include<iostream>
using namespace std;
void movezero(int arr[]  , int n){
    int j=0;
    for(int i=0;i<n;i++)
    if(arr[i]!=0)
    arr[j++] = arr[i];

    while(j<n)
    arr[j++]  =0;
}
int main(){
    int arr[] = { 12,34,0,9,0,8,0,7,0,};

    int n = sizeof(arr)/sizeof(arr[0]);
    movezero(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       
    }
    return 0;
}
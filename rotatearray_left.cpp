#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;cout<<"Enter rotated number:";
    cin>>k;
    k=k%n;
    int rotated[n];
    int index = 0;
    for( int i=k;i<n;i++){
        rotated[index++] = arr[i];
    }
    for(int i=0;i<k;i++){
        rotated[index++] = arr[i];
    }
    cout<<"rotated array is:";
    for(int i=0;i<n;i++){
        cout<<rotated[i]<<" ";
    }
}
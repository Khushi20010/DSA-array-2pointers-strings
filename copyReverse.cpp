#include<iostream>
using namespace std;
int main(){
    int arr[] = { 100,200,300,400,500};
    int n =sizeof(arr)/4;
    for( int i=0; i<n; i++){
        cout<<arr[i]<<" " <<endl;
    }
   int i=0 ,j=n-1;
   while(i<j){
    swap(arr[i] ,arr[j]);
    i++;
    j--;
   }
    for( int i=0; i<n; i++){
        cout<<arr[i]<<" " <<endl;
    }
  }
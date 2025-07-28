#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,45,67,89,90};
    int n=5;
    int max=INT16_MIN;
    for( int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<"";
}
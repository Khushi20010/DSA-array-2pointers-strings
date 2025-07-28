#include<iostream>
using namespace std;
int main(){
    int arr[]  ={12,23,35,45,56};
    int n=5;
    int min=INT16_MAX;
    int secmin= INT16_MAX;
    for( int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<min<<" "<<endl;
    for(int i=0;i<n;i++){
        if(secmin>arr[i]&&arr[i]!=min)secmin=arr[i];
    }
    cout<<secmin<<"";
}
#include<iostream>
using namespace std;
int main(){
    int arr[] = {54,76,89,7676,7986};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest  = INT16_MIN;
    for( int i=0;i<n;i++){
        if(largest<arr[i]){
            largest = arr[i];
           
        }
    }
     cout<<largest<<" "<<endl;
     return 0;
}
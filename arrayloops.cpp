#include<iostream>
using namespace std;
int main(){
int arr[]  ={ 12,25,45,56,67,78,89};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
   cout<<arr[i]<<" "<<endl;
}
}
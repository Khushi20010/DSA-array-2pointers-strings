#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int  arr[n];
bool visited[n] = {false};
cout<<"Enter the elements of array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"freq of elemnts:\n ";
for(int i=0;i<n;i++){
    if(visited[i]) continue;
    int count =1;
    for(int j=i+1;j<n;j++){
        if(arr[i] == arr[j]){
   count++;
        visited[j]  =true;
        }
     
    }
    cout<<arr[i]<<"  occurs  "<<count<<"  times\n";
}
return 0;

}
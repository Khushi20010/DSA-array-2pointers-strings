#include<iostream>
using namespace std;
void change(int x[]){
    x[1]  = 787;
}
int main(){
    int arr[] ={ 23,56,78,676,35263};
    cout<<arr[1]<<endl;
    change (arr);
     cout<<arr[1];
     
}



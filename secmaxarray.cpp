#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,45,65,78,89,97,57};
    int n=7;
    int max = INT16_MIN;
    int secmax=  INT16_MIN;
    for( int i=0;i<n;i++){
        if(max<arr[i])max=arr[i];
    }
    cout<<max<<""<<endl;
    for(int i=0;i<n;i++){
        if(secmax<arr[i]&&arr[i]!=max)secmax=arr[i];
    }
    cout<<secmax<<"";
}
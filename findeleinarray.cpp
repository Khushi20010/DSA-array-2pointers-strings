#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x: ";
    cin>>x;
    int arr[] = { 23,45,67,97,80};
    int n=5;
    bool flag  =false;
    for( int i=0;i<n;i++){
        if (x== arr[i]){
            flag  ==true;
        }
    }
    if(flag ==true) cout<<"present"<<endl;
    else (cout<<"absent"<<endl);

}
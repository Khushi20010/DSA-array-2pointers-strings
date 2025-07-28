  #include<iostream>
  using namespace std;
  int main(){
    int arr[]={20,30,40,50,60};
    int n=sizeof(arr)/4;
    for( int i=0;i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    int i=2 ,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for( int i=0;i<n;i++){
        cout<<arr[i]<<""<<endl;
    }
  }
 #include<iostream>
 using namespace std;
 int main(){
    int arr[] ={12,4545454,47,89,56};
    int n = 5;
    int largest = arr[0];
    for( int i=1;i<n;i++){
        if(arr[i]>largest){
         largest   = arr[i];
        }
      
    }
      cout<<largest<<endl;
     


      int secondlargest = -1;
      for( int i=0; i<n; i++){
        if(arr[i]>secondlargest  && arr[i]!=largest){
            secondlargest = arr[i];
        }
      }
      cout<<secondlargest<<endl;
      return 0 ;
 }
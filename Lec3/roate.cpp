#include<bits/stdc++.h>
 using namespace std;

void display(int arr[],int s){
    for(int i  = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

 int main(){
     int r;
     cin>>r;

     int arr[] = {1,2,3,4,5,6};
     int size = 6;

     int arr2[size];

     display(arr,size);
     for(int i = 0;i<size;i++){
         arr2[ (i+r)%size ] = arr[i];
     }
     display(arr2,size);
     return 0;
 }
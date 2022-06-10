#include<bits/stdc++.h>
// #include<string>
 using namespace std;

 void display(int arr[],int size){
     for(int i = 0;i<size;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     return;
 }

void shift(int arr[],int size){
    int c = 0;
    display(arr,size);
    for(int i = 0;i<size;i++){
        if(arr[i] == 0){
            c++;
        }else{
            arr[i-c] = arr[i];
        }
    }

    for(int i = size-c;i<size;i++){
        arr[i] = 0;
    }
    display(arr,size);
}

 int main(){
    int arr[] = {1,2,3,0,0,0,4,5,0,0};
    //  arr[] = {1,2,3,4,5,0,0,0,0,0};

    int size = sizeof(arr)/sizeof(arr[0]);
    shift(arr,size);
   /* int arr2[size]; //n = size
    int j=0;
    display(arr,size);
    for(int i = 0;i<size;i++){
        if(arr[i] != 0){
            arr2[j] =arr[i];
            j++;
        }
    }

    for(;j<size;j++){
        arr2[j] = 0;
    }
    display(arr2,size);*/
     return 0;
 }
#include<bits/stdc++.h>
 using namespace std;

void add(int arr1[5][5],int arr2[5][5]){
    for(int i  = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

 int main(){
     int arr[5] = {1,2,4,5,6};

     int arr2[5][5] = {
         {1,2,4,5,6},
         {1,2,4,5,6},
         {1,2,4,5,6},
         {1,2,4,5,6},
         {1,2,4,5,6}
     };

    //  cout<<arr2[3][2]<<endl;
    //  arr2[3][2] = 50;
    //  cout<<arr2[3][2]<<endl;

    add(arr2,arr2);

     return 0;
 }
#include<bits/stdc++.h>
using namespace std;

class student{
};

int main(){
    int a;

    student*ptro = new student;
    // int*ptr = (int*) malloc(sizeof(int));
    // int*ptr = new int;

    // int*arr = (int*)malloc(sizeof(int),5);
    int*arr = new int[5]; //dynamic memory
    //int arr[5]; //static memory

    // arr == &arr[0];
    //*arr -> 0 index == arr[0]
    // *(arr+1) -> 1 index == arr[1]

    arr[1] = 5; // *(arr+1) = 5;

    return 0;
 }
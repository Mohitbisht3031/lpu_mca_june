#include<bits/stdc++.h>
 using namespace std;

class ComplexNum{
    int real;
    int img;
    public:

    ComplexNum(int real = 0,int img = 0){
        this->real = real;
        this->img = img;
    }

    void display(){
        cout<<real<<"+ i"<<img<<endl;
    }

    ComplexNum plus(ComplexNum c){
        // ComplexNum res;
        // res.real = this->real+c.real;
        // res.img = this->img+c.img;
        // return res;

        int r = this->real+c.real;
        int i = this->img + c.img;
        return ComplexNum(r,i);
    }

    // return_type opreator symbol(arg){}
    ComplexNum operator +(ComplexNum c){
        int r = this->real+c.real;
        int i = this->img+c.img;
        return ComplexNum(r,i);
    }

    void operator ++(){
        this->real++;
        return;
    }

    // ComplexNum multiply(ComplexNum c){

    // }

};
// ++ --

 int main(){
    // int x = 10;
    // int y = 15;
    // int z = x+y;
    ComplexNum c1(5,5);
    ComplexNum c2(10,10);
    c1.display();
    ++c1; //-> 6+i5
    // c1++;
    c1.display(); 
    // 1 -> 1+i0
    // ComplexNum res = c1.plus(c2);
    // ComplexNum res = c1+c2;
    // res.display();
    return 0;
 }
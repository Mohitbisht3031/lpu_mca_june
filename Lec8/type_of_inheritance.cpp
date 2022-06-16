#include<bits/stdc++.h>
using namespace std;

// Single 
/*class A{
};

class B : public A{
    
};*/

// Hierarchal 
/*class A{};

class B: public A{};
class c: public A{};*/

// Multilevel
/*class A{};

class B: public A{};

class C: public B{};*/

// Multiple
/*class A{};
class B{};
class C : public A,public B{};*/

// Hybrid

class A{};
class B{};
class C: public A, public B{};
class D: public C {};
class E : public C{};


int main(){
    return 0;
 }
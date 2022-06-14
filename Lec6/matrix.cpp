#include<bits/stdc++.h>
 using namespace std;

class Matrix{
    vector<vector<int>>mat;
    
    public:

    Matrix(int a = 0){
        mat = vector<vector<int>>(10,vector<int>(10,a));
    }

    void display(){
        for(int i = 0;i<this->mat.size();i++){
            for(int j = 0;j<this->mat[0].size();j++){
                cout<<this->mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Matrix operator +(Matrix m){
        Matrix res;

        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                res.mat[i][j] = mat[i][j] + m.mat[i][j];
                // res.mat[i][j]= m.mat[i][j]+this->mat[i][j];
            }
        }

        return res;
    }

};

 int main(){
    // vector<int>v(5,10);
    Matrix m1(5);
    Matrix m2(6);
    Matrix res = m1+m2;
    res.display();
    return 0;
 }
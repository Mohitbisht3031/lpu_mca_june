#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int>pq; //by defualty which is this expression we use max pq

    // priority_queue<int,vector<int>,greater<int>>pq;
    priority_queue<int,vector<int>,greater<int>>minpq; //min priority queue
    vector<int>v = {10,20,1,-50,1000,500,-10};

    for(int i = 0;i<v.size();i++){
        minpq.push(v[i]);
        pq.push(v[i]);}

    // q.front(); -> pq.top();

    cout<<pq.top()<<endl;
    cout<<minpq.top()<<endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

class minHeap{
    vector<int>v;
    public:

    bool empty(){
        return v.size() == 0;
    }

    void push(int x){
        v.push_back(x);
        int childI = v.size()-1;
        int parentI = (childI-1)/2;
        // uphepify
        while(childI > 0){
            if(v[childI] < v[parentI] ){
                swap(v[childI],v[parentI]);
            }else break;
            childI = parentI;
            parentI = (childI-1)/2;
        }

    }
    int getmin(){
        if(v.size() == 0)return -1;

        return v[0];
    }

    int remove(){
        if(v.size() == 0)return -1;

        int ans = v[0];
        swap(v[0],v[v.size()-1]);
        v.pop_back();

        int parentIndex = 0;
        int lci = 2*parentIndex+1;
        int rci = 2*parentIndex+2;

        // down hepify 
        while(lci < v.size()){

            int minIndex = parentIndex;

            if(lci < v.size() && v[minIndex] > v[lci]){
                minIndex = lci;
            }

            if(rci < v.size() && v[minIndex] > v[rci]){
                minIndex = rci;
            }

            if(minIndex == parentIndex)break;

            swap(v[minIndex],v[parentIndex]);
            parentIndex = minIndex;
            lci = 2*parentIndex+1;
            rci = 2*parentIndex+2;

        }

        return ans;
    }

};

int main(){
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v){
    int rows = v.size();
    for(int i = 0; i < rows; ++i){
        cout<<v[i];
        cout<<endl;
    }
}

void printMatrix(vector<vector<int> >& m){
     int rows = m.size();
     int cols = m[i].size();
     for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            cout<<this->m[i][j];
        }
        cout<<endl;
    }
}

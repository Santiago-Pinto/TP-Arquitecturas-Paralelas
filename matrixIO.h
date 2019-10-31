#ifndef MATRIXIO_H_INCLUDED
#define MATRIXIO_H_INCLUDED
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
     int cols = m[0].size();
     for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            cout<<m[i][j];
        }
        cout<<endl;
    }
}



#endif // MATRIXIO_H_INCLUDED

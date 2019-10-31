#include "fileParser.h"
#include <fstream>
#include <iostream>
#include <algorithm>

using namespace std;

FileParser::FileParser() {
    //ctor
}

void FileParser::parseSystem(string& path){
    ifstream input;
    input.open(path.c_str());

    string val;
    int rows, cols;
    input >> val;
    rows = atoi(val.c_str());
    input >> val;
    cols = atoi(val.c_str());
    this->A.resize(rows);


    for(int i = 0 ; i < rows ; ++i) {
        this->A[i].resize(cols);
    }

    for(int i=0; i<rows; ++i){
        for(int j=0; j<cols; ++j){
            input >> val;
            this->A[i][j] = atoi(val.c_str());
        }
    }

    input.close();
}

void FileParser::parseResult(string& path){
    ifstream input;
    input.open(path.c_str());

    string val;
    int rows;
    input >> val;
    rows = atoi(val.c_str());
    this->b.resize(rows);

    for(int i=0; i<rows; ++i){
        input >> val;
        this->b[i] = atoi(val.c_str());
    }

    input.close();
}

vector<vector<int> >& FileParser::getA(){
    return this->A;
}
vector<int>& FileParser::getB() {
    return this->b;
}

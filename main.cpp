#include <iostream>
#include "fileParser.h"
#include "matrixIO.h"
using namespace std;

int main() {
    FileParser parser = FileParser();
    string path = "a.txt";
    parser.parseSystem(path);
    path = "b.txt";
    parser.parseResult(path);
    return 0;
}

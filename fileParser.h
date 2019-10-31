#ifndef FILEPARSER_H_INCLUDED
#define FILEPARSER_H_INCLUDED
#include <string>
#include <vector>

class FileParser {
    private:
        std::vector<std::vector<int> > A; // Forma matricial del sistema
        std::vector<int> b; // Forma matricial del resultado

    public:
        FileParser();
        void parseSystem(std::string& path);
        void parseResult(std::string& path);
        std::vector<std::vector<int> >& getA();
        std::vector<int>& getB();
};


#endif // FILEPARSER_H_INCLUDED

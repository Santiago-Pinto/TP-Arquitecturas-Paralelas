#ifndef MATRIXBUILDER_H_INCLUDED
#define MATRIXBUILDER_H_INCLUDED

class MatrixBuilder {
    private:
        std::vector<std::vector<int> > D; // Matriz diagonal
        std::vector<std::vector<int> > iD; // Inversa de la matriz diagonal
        std::vector<std::vector<int> > L; // Matriz triangular inferior
        std::vector<std::vector<int> > U; // Matriz triangular superior
        std::vector<std::vector<int> > T; // Matriz de Jacobi
        std::vector<std::vector<int> > C; // Segunda matriz de Jacobi

        void buildD();
        void calculateiD();
        void buildL();
        void buildU();

    public:
        MatrixBuilder(std::vector<std::vector<int> >& A, std::vector<int>& b);
        void calculateT();
        void calculateC();
        std::vector<std::vector<int> >& getT();
        std::vector<std::vector<int> >& getC();
};

#endif // MATRIXBUILDER_H_INCLUDED

#include "GetOutput.h"

class Knn{
    private:
    std::list<Vector> xList;
    std::list<std::string> yList;
    Vector x;
    int k;
    std::string matric;

    public:
    Knn(std::list<Vector> xList,std::list<std::string> yList,Vector x,int k,std::string matric);
    void predict();

};
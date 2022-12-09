#include "Dist.h"

class InputValidation{ //this class gets input from getInput class and validate it.
private:
    bool valid = true;
public:
    InputValidation(); //constructor
    void setValid(bool flag); //setter
    bool getValid(); //getter
    void vectorSize(Vector v1, Vector v2); //vector from same sizes
    void zeroDivision(Vector v1, Vector v2); //no positions with two 0 (for conbbera formula)
    void isEmpty(Vector v1, Vector v2); //no empty vector
    void isNumber(std::string str); //no chars inside the input
};
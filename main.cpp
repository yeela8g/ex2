
#include "GetOutput.h"


int main(){
    
    GetInput in;//input validation
    in.input();//get input and validate it.
    if(in.getValid_toMain() == false){
        exit(1);
    }
    Vector v1=in.getV1();// Distance calculation
    Vector v2=in.getV2();

    GetOutput output; // print distances
    output.printDist(v1,v2);

}

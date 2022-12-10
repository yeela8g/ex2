
#include "KnnManager.h"

int main(int argc, char* argiv[]){
    KnnManager mng;
    mng.manage(std::stoi(argiv[1]), argiv[2], argiv[3]);
}

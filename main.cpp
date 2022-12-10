
#include "Knn.h"

int main(int argc, char* argiv[]){

    int k =std::stoi(argiv[1]);
    std::string path = argiv[2];
    std::string distanceMatric = argiv[3];
    GetInput in;//input validation
    std::list<std::string> featuresLabelsArr[2];
    in.fileInput(path, featuresLabelsArr);

    while(1){
        std::string xStr;
        std::getline(std::cin,xStr); //get features test-sample, as a sentence (with " ")
        std::list<Vector> xValidList;
        std::list<std::string> yValidList;
        std::list<std::string>::iterator itrY = featuresLabelsArr[1].begin();
        for(std::list<std::string>::iterator itrX = featuresLabelsArr[0].begin(); itrX != featuresLabelsArr[0].end(); itrX++){
            in.input(*itrX, xStr);
            if(in.getValid_toMain() == true){
                Vector v1=in.getV1();  //vectors creation
                xValidList.push_back(v1);
                yValidList.push_back(*itrY);
            }
            itrY++;
        }

        Vector xVect=in.getV2();
        if(!xValidList.empty()){
            Knn knn(xValidList,yValidList,xVect,k,distanceMatric);
            knn.predict();
        }
    }

}

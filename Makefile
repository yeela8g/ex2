output: main.o Dist.o GetInput.o GetOutput.o InputValidation.o Vector.o Knn.o KnnManager.o
	g++ main.o Dist.o GetInput.o GetOutput.o InputValidation.o Vector.o Knn.o KnnManager.o -o output

main.o: main.cpp
	g++ -std=c++11 main.cpp

Dist.o: Dist.cpp Dist.h
	g++ -std=c++11 Dist.cpp

GetInput.o: GetInput.cpp GetInput.h
	g++ -std=c++11 GetInput.cpp

GetOutput.o: GetOutput.cpp GetOutput.h
	g++ -std=c++11 GetOutput.cpp

InputValidation.o: InputValidation.cpp InputValidation.h
	g++ -std=c++11 InputValidation.cpp

Vector.o: Vector.cpp Vector.h
	g++ -std=c++11 Vector.cpp

Knn.o: Knn.cpp Knn.h
	g++ -std=c++11 Knn.cpp

KnnManager.o: KnnManager.cpp KnnManager.h
	g++ -std=c++11 KnnManager.cpp

clean:
	rm *.o output

output: main.o Dist.o GetInput.o GetOutput.o InputValidation.o Vector.o Knn.o KnnManager.o
	g++ main.o Dist.o GetInput.o GetOutput.o InputValidation.o Vector.o Knn.o KnnManager.o -o output

main.o: main.cpp
	g++ -c main.cpp

Dist.o: Dist.cpp Dist.h
	g++ -c Dist.cpp

GetInput.o: GetInput.cpp GetInput.h
	g++ -c GetInput.cpp

GetOutput.o: GetOutput.cpp GetOutput.h
	g++ -c GetOutput.cpp

InputValidation.o: InputValidation.cpp InputValidation.h
	g++ -c InputValidation.cpp

Vector.o: Vector.cpp Vector.h
	g++ -c Vector.cpp

Knn.o: Knn.cpp Knn.h
	g++ -c Knn.cpp

KnnManager.o: KnnManager.cpp KnnManager.h
	g++ -c KnnManager.cpp

clean:
	rm *.o output
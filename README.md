# Ex1_2
---
## Description
the purpose of the program in this milestone is to calculate different distance formulas between Vectors.
we have created vector class ('Vector') and class ('Dist') who performs distance calculations over two vector objects.
the user is ask to insert equal number of values for both vectors so we created ('InputValidation') class to enforce it. 
The requsted input format is numbers separated with space (" ") for each vector, and the program output is 5 distances caculation results between the two Vectors, for example:
![image](https://user-images.githubusercontent.com/118124478/203364075-de62b59b-ed04-400a-b6df-ae94ecf8a4c2.png)

(adding one space (" ") after the last index in the Vector is optional).


for calculating minkovski distance we chose constant p = 2;

## Optimization
- created dedicated class ('GetOutput') for printing all distances with the desired floating point.
- created dedicated class ('GetInput') for input receiving treatment.
> these first two designs optimized our code by maintaining the main class simple and clean.
- function method of calculating the absolute value of the difference between vectors.
- minkovski calculation function who gets different p values as a input in order to be able to calculate manhattan and euclidean formulas as well.
> these last two optimizations prevented code duplication.

## How to use
for running on university server and getting a.out file, use the command:
### g++ -std=c++11 *.cpp
run **(./a.out)**

>for example:



![image](https://user-images.githubusercontent.com/118124478/202859030-70110109-bd3d-4f9a-904f-41a5451b0c5f.png)



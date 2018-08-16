# Runner

## Overview/ Problem
Executable called “Runner”. It will ask the user which of the problems below to solve.

• A library called “SumOfMultiple” containing a solution for the following problem:

•Find the sum of all natural numbers that are a multiple of 3 or 5 below a limit provided
as input.A library called “SequenceAnalysis” containing a solution for the following problem:
- Find the uppercase words in a string, provided as input, and order all characters in these
words alphabetically.
- Input: "This IS a STRING"
- Output: "GIINRSST"


**Author: [Agustin Ortega](https://github.com/agusorte), aortega.jim@gmail.com**

## Solution
this code was implemented in c++ under ubuntu using c++11 and standard library, the code is not using vstudio but it is easily compiling using directly g++ or cmake.

	g++ runner.cpp -o runner
	
Visual studio compilation please follow the following link:

	https://blogs.msdn.microsoft.com/vcblog/2016/10/05/cmake-support-in-visual-studio/


## Dependences

- [CMake] (http://www.cmake.org/) 
- [GIT](https://git-scm.com/)



## 1. Clone repository

git clone 


## 2. Compilation

	mkdir build && cd build && cmake ..
	make



## 3. Running

Executable is inside the folder bin

you can run as

	./bin/runner

	or

	cd bin && ./runner




## 4. Comments

this is not validated for big numbers or string but can be added exceptions or check the size of the number to validate.


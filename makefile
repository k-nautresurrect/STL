all: findfunc binarySearch

findfunc: header_algorithm/findFunc.cpp
	g++ -std=c++14 -o findfunc header_algorithm/findFunc.cpp

binarySearch: header_algorithm/binarySearch.cpp
	g++ -std=c++14 -o binarySearch header_algorithm/binarySearch.cpp
all: findfunc

findfunc: header_algorithm/findFunc.cpp
	g++ -std=c++14 -o findfunc header_algorithm/findFunc.cpp
all: findfunc binarySearch nonModifyingSeq

findfunc: header_algorithm/findFunc.cpp
	g++ -std=c++14 -o findfunc header_algorithm/findFunc.cpp

binarySearch: header_algorithm/binarySearch.cpp
	g++ -std=c++14 -o binarySearch header_algorithm/binarySearch.cpp

nonModifyingSeq: header_algorithm/nonModifyingSeq.cpp
	g++ -std=c++14 -o nonModifyingSeq header_algorithm/nonModifyingSeq.cpp
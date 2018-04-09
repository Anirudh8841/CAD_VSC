all: application

application: InputOutput3Dtest.o parserSaver.o
	g++ -std=c++11 -I../Classes InputOutput3Dtest.o parserSaver.o 
	
InputOutput3Dtest.o: InputOutput3Dtest.cpp
	g++ -std=c++11 -I../Classes -c InputOutput3Dtest.cpp
	
parserSaver.o: parserSaver.cpp
	g++ -std=c++11 -I../Classes -c parserSaver.cpp
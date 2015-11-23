ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)
ROOTDIR = root_files
ROOTMAC = root_macros
FLAGS = --std=c++11
SCRAMBLE = scramble_outputs


all: reorder


reorder: reorder.cpp reorder.h
	g++ -o $@ reorder.cpp

GwtChains: GwtChains.cpp GwtChains.h
	g++ -o $@ GwtChains.cpp $(ROOTFLAGS) $(ROOTLIBS) $(FLAGS)



run_short: reorder root_longest_chain
	./reorder desyncFilter.txt output.txt 
	./GwtChains       desyncFilter.txt  GwtChains.root

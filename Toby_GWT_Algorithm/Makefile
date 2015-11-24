ROOTFLAGS = $(shell root-config --cflags)
ROOTLIBS  = $(shell root-config --libs)
ROOTDIR = root_files
ROOTMAC = root_macros
SCRAMBLE = scramble_outputs


all: reorder GwtChains

reorder: reorder.cpp reorder.h
	g++ -o $@ reorder.cpp

GwtChains: root_GwtChains.cpp root_GwtChains.h
	g++ -o $@ root_GwtChains.cpp $(ROOTFLAGS) $(ROOTLIBS)


run_short: reorder root_GwtChains
	./reorder 	desyncFilter.txt 	output.txt 
	./GwtChains	desyncFilter.txt  	root_GwtChains.root


clean:
	rm -f reorder GwtChains

ROOTFLAGS = -pthread -std=c++11 -Wno-deprecated-declarations -m64 -I/home/velo/root/include
ROOTLIBS  = $(shell root-config --libs)

all: reorder GwtChains

reorder: reorder.cpp reorder.h
	g++ -o $@ reorder.cpp

GwtChains: root_GwtChains.cpp root_GwtChains.h
	g++ -o $@ root_GwtChains.cpp $(ROOTFLAGS) $(ROOTLIBS)

run_short: reorder GwtChains
	./reorder 	desyncFilter.txt 	output.txt 
	./GwtChains	gwt_pll_1000frames.txt	root_GwtChains.root

clean:
	rm -f reorder GwtChains
	rm -f example.txt

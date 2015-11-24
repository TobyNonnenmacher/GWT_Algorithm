#ifndef __GwtChains_h__
#define __GwtChains_h__


#include <iostream>
#include <fstream>
#include <TFile.h>
#include <TGraph.h>
#include <TH1.h>
#include <string>
#include <bitset>
#include <vector>

using namespace std;


//typedef
typedef bitset<128> frame;

//hist
TH1F histogram;

//functions
//funcitons
void   graph_init        ();
void   draw_graphs       ();
int    chain_count       (frame, TH1F*);
frame  str_to_frame      (string);
void   save_graphs       ();



//Main
int main(int argc, const char * argv[])
{
  //Check Command Line Arguments
  if (argc != 2)
    {
      cerr << "Incorrect arguments, please specify input and output files" << endl;
      cerr << "e.g. $:  <input_file> <output_file>" << endl;
      return 1;
    }

  //Files
  fstream input_file(argv[1]);
  ofstream output_file(argv[2]);
  
  
  graph_init();
  
  draw_graphs();

  save_graphs();
    
  return 0;
}

#endif

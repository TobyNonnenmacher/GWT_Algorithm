#ifndef __GwtChains_h__
#define __GwtChains_h__


#include <iostream>
#include <fstream>
#include <TFile.h>
#include <TGraph.h>
#include <TH1.h>
#include <string>
#include <vector>
#include <sstream>
#include <stdio.h>     
#include <stdlib.h> 

using namespace std;

//hist
TH1F    * histogram;
fstream * input_file;
TFile   * output_file;

//functions
void   graph_init        ();
void   draw_graphs       ();
int    transition_count  (vector<int>, TH1F*);
void   save_graphs       ();

//Main
int main(int argc, const char * argv[])
{
  //Check Command Line Arguments
  if (argc != 3)
    {
      cerr << "Incorrect arguments, please specify input and output files" << endl;
      cerr << "e.g. $:  <input_file> <output_file>" << endl;
      return 1;
    }

  //Files
  input_file = new fstream(argv[1]);
  output_file = new TFile(argv[2],"RECREATE");
  
  graph_init();
  
  draw_graphs();

  save_graphs();
    
  return 0;
}

#endif

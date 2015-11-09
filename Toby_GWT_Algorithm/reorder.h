#ifndef __reorder_h____
#define __reorder_h____

#include <bitset>
#include <string>
#include <iostream>
#include <fstream>
#include <assert.h>
#include <vector>

#define __debug_mode__

using namespace std;

typedef bitset<128> frame;

//Simulation Functions
frame str_to_frame         (string)        ;

frame   Reorder              (frame)           ;


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
    
  //File
  vector<fstream*> file;
  file.push_back(new fstream(argv[1]));
  for (int i(2); i < argc; i++)
    file.push_back(new fstream(argv[i], fstream::out));

  int frame_count(0); 
  while(!file[0]->eof()) 
    {      
      //Frame Handling      
      vector<frame> data_frame; 
      for (int i(0); i < argc-1; i++) data_frame.push_back(frame()); 

      //read in one 128bit frame from file 
      string buffer; *file[0] >> buffer; 
      data_frame[0] = str_to_frame(buffer); 
      // if(data_frame[0] == 0) break;      


     
      vector<frame> data_output;
      for (int j(1); j<file.size(); j++)
	{
	  data_output[j] = Reorder(data_frame[j]);
	}	
    
         //write to out files
  for (int i(1); i<file.size(); i++)
    *file[i] << data_frame[i];
    }
      


  
  //while !eof
  
  cout << endl << "reorder: " << frame_count << " frame" << endl;
}

#endif

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

typedef bitset<30>  spp;
typedef bitset<128> frame;
typedef spp(*FunctionArray)(spp DATA_IN, int spp_id);

//Simulation Functions
frame str_to_frame         (string)        ;
spp   frame_to_spp         (frame, int)    ;
frame attach_spp_to_frame  (frame,spp,int) ;
spp   Reorder              (spp)           ;


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
    
  //File
  vector<fstream*> file;
  for (int i(1); i < argc; i++)
    file.push_back(new fstream(argv[i]));

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


      /* //SPP Handling */
      /* vector<spp*> data_spp; */
      /* for (int i(0); i < data_frame.size(); i++)  */
      /* 	data_spp.push_back(new spp[4]); */

      /* // ---- debugging ---- */
      /* frame_count++; */
      /* if (frame_count % 10000 == 0) cout << frame_count << " | "; */

      /* //attach header and parity info from input to output frames */
      /* for (int i(1); i < data_frame.size(); i++) */
      /* 	for (int j(127); j>=120; j--) */
      /* 	  { */
      /* 	    data_frame[i][j] = data_frame[0][j]; */
      /* 	  } */
     
      /* //scramble input frame and attach to output frame */
      /* for (int j(0); j<4; j++) */
      /* 	for(int i(0); i<data_spp.size(); i++) */
      /* 	  { */
      /* 	    if(i==0) //Raw Input */
      /* 	      { */
	      
      /* 	      data_spp[i][j] = frame_to_spp(data_frame[0],j); */

      /* #ifdef __debug_mode__ */
      /* 	    cout << "Input Data:  " << data_spp[0][j] << endl; */
      /* #endif */
      /* 	      } */
      //compute scramble algorithms for all spp's
      for (int j(1); j<file.size(); j++)
	{
	  data_output[j] = Reorder(data_frame[j]);
	}	
      /* if (data_spp[0][j] != RX_scramble[i-1](data_spp[i][j],j)) //check TX-RX reversibility */
      /* 	cerr << "data_spp[" << i << "][" << j << "] TX-RX inconsistancy at frame: " << frame_count << endl; */
		
      /* data_frame[i] = attach_spp_to_frame(data_frame[i],data_spp[i][j],j); */
		
       
    }
      

  //write to out files
  for (int i(1); i<file.size(); i++)
    *file[i] << data_frame[i];
} //while !eof
  
cout << endl << "reorder: " << frame_count << " frame" << endl;
}

#endif

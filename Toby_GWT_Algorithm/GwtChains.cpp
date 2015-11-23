#include "root_longest_chain.h"

void graph_init()
{
  
  histogram.push_back( new TH1F(
		      "desync9X_scrambler_hist",
		      "Chain Lengths in Desync9X-Scrambled Data",
		      30,0,30
		      ));
 
}

void draw_graphs()
{
  

  int count(0);
  while(!input_file.eof()) 
    {
      string input; input_file >> input;
      chain_count(str_to_frame(input),histogram);
      
      count ++;
      if (count%10000 == 0) cout  << count << endl;
    }
}


frame str_to_frame(string signal)
{
  frame _frame = 0;
    
  for (int index(1); index <= 128; index++)
    if (signal[128-index] == '1')
      _frame[index-1] = 1;
    
  return _frame;
}

int chain_count(frame DATA, TH1F* histogram) //IN PROGRESS
{ 
  int chain_length(1);
  for (int i(1); i < 120 ; i++)
    {
      if (DATA[i] == DATA[i-1] && DATA[i] == 1)
	//if (DATA[i] == 0)  //chains of 0's
	//if (DATA[i] == 1)  //chains of 1's
	{
	  chain_length = chain_length+1;	 
	}
      else
	{
	  histogram -> Fill(chain_length);	  
	  chain_length = 1;
	}         
    }
  return 0;
}

void save_graphs()
{
  output_file -> cd();
  for (auto& hist: histogram)
    hist->Write();
  output_file->Close();
}
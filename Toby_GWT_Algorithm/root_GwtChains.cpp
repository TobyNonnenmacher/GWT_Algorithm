#include "root_GwtChains.h"

void graph_init()
{  
  histogram = new TH1F(
		       "desync9X_scrambler_hist",
		       "Chain Lengths in Desync9X-Scrambled Data",
		       250,0,250
		       );
}

void draw_graphs()
{
  vector <vector <string> > data;
  // ifstream infile( "gwt_pll_1000frames.txt" );

  string input; 
  vector<int> record;
  while(*input_file >> input)
    {
      input = input.substr(0, input.size()-1);
      record.push_back(atoi(input.c_str()));
    }

  ofstream myfile;
  myfile.open ("example.txt");
  for (auto& i : record)
    {
      myfile << i << " ";
    }
  myfile.close();
  

  transition_count(record,histogram);

}






// void draw_graphs()
// {
//   int count(0);
//   int input;
//   while(*input_file >> input) 
//     {
//       //#ifdef __debug__
//       cout << input;
//       //#endif 

//       transition_count(input,histogram);     
//       count ++;

//       if (count%10000 == 0) 
// 	cout << count << endl;
//     }
// }

int transition_count(vector<int> DATA, TH1F* histogram) 
{ 



  int chain_length(1);
  int a(1);
  for (int i = 0; i < DATA.size(); i++)
    {

      if (DATA[i]*DATA[i-1] >= 0)
	{
	  chain_length ++;

	  //cout << chain_length << endl;

	}

      else
	{




	  histogram -> Fill(chain_length);

	  chain_length = 1;

	}         

 
    }
}
void save_graphs()
{
  output_file -> cd();
  histogram   -> Write();
  output_file -> Close();
}

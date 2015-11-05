#ifndef __root_graph_transitions_h__
#define __root_graph_transitions_h__

#include <iostream>
#include <fstream>
#include <TFile.h>
#include <TGraph.h>
#include <TH1.h>
#include <TVector.h>
#include <TVectorfwd.h>
#include <TMatrix.h>
#include <string>
#include <bitset>
#include <vector>

using namespace std;

//typedef
typedef bitset<128> packet;

//files
fstream * un_scrambled_datafile;
fstream * new_scrambled_datafile;
fstream * old_scrambled_datafile;
TFile   * output_file;

//graphs
TGraph un_scrambled_graph;
TGraph new_scrambled_graph;
TGraph old_scrambled_graph;

vector<int> un_scrambled_balance;
vector<int> new_scrambled_balance;
vector<int> old_scrambled_balance;

//funcitons
void fillVector(fstream* file, vector<int>& balance);
void draw_graphs(TGraph&, vector<int>);
packet str_to_packet(string);
void save_graphs();
            
int main(int argc, const char ** argv)
{
    if (argc != 5)
    {
        cout << "Invalid arguments, please use form: $ <executable> <unscrambled> <new_scrambled> <old_scrambled> <output_file>" << endl;
        return 1;
    }
    else
    {
        //open files
        un_scrambled_datafile  = new fstream(argv[1],fstream::in);
        new_scrambled_datafile = new fstream(argv[2],fstream::in);
        old_scrambled_datafile = new fstream(argv[3],fstream::in);
        output_file            = new TFile(argv[4], "RECREATE");
    }
    
    fillVector(un_scrambled_datafile, un_scrambled_balance);    
    fillVector(new_scrambled_datafile, new_scrambled_balance);    
    fillVector(old_scrambled_datafile, old_scrambled_balance);    
    
    draw_graphs(un_scrambled_graph, un_scrambled_balance);
    draw_graphs (new_scrambled_graph, new_scrambled_balance);
    draw_graphs(old_scrambled_graph , old_scrambled_balance);

    save_graphs();
    
    return 0;
}

#endif

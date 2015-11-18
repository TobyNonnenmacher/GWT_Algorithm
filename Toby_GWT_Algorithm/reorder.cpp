#include "reorder.h"
frame str_to_frame(string signal)
{
  frame _frame = 0;
    
  for (int index(0); index <= 127; index++)
    if (signal[127-index] == '1')
      _frame[index] = 1;
    
  return _frame;
}






frame Reorder(frame TX_DATA_IN)
{
  frame TX_DATA_OUT; 
  //TX_DATA_OUT = TX_DATA_IN;
  
  TX_DATA_OUT[ 0] = TX_DATA_IN[ 0];
  TX_DATA_OUT[ 1] = TX_DATA_IN[ 1];
  TX_DATA_OUT[ 2] = TX_DATA_IN[ 2];
  TX_DATA_OUT[ 3] = TX_DATA_IN[ 3];
  TX_DATA_OUT[ 4] = TX_DATA_IN[ 4];
  TX_DATA_OUT[ 5] = TX_DATA_IN[ 5];
  TX_DATA_OUT[ 6] = TX_DATA_IN[ 6];
  TX_DATA_OUT[ 7] = TX_DATA_IN[ 7];
  TX_DATA_OUT[ 8] = TX_DATA_IN[ 8];
  TX_DATA_OUT[ 9] = TX_DATA_IN[ 9];
  TX_DATA_OUT[10] = TX_DATA_IN[10];
  TX_DATA_OUT[11] = TX_DATA_IN[11];
  TX_DATA_OUT[12] = TX_DATA_IN[12];
  TX_DATA_OUT[13] = TX_DATA_IN[13];
  TX_DATA_OUT[14] = TX_DATA_IN[14];
  TX_DATA_OUT[15] = TX_DATA_IN[15];
  TX_DATA_OUT[16] = TX_DATA_IN[16];
  TX_DATA_OUT[17] = TX_DATA_IN[17];
  TX_DATA_OUT[18] = TX_DATA_IN[18];
  TX_DATA_OUT[19] = TX_DATA_IN[19];
  TX_DATA_OUT[20] = TX_DATA_IN[20];
  TX_DATA_OUT[21] = TX_DATA_IN[21];
  TX_DATA_OUT[22] = TX_DATA_IN[22];
  TX_DATA_OUT[23] = TX_DATA_IN[23];
  TX_DATA_OUT[24] = TX_DATA_IN[24];
  TX_DATA_OUT[25] = TX_DATA_IN[25];
  TX_DATA_OUT[26] = TX_DATA_IN[26];
  TX_DATA_OUT[27] = TX_DATA_IN[27];
  TX_DATA_OUT[28] = TX_DATA_IN[28];
  TX_DATA_OUT[29] = TX_DATA_IN[29];

for (int i(0); index <= 30; index++)
    


  return TX_DATA_OUT; //COMMON_FRAME
}


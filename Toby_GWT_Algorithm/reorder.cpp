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
  TX_DATA_OUT = TX_DATA_IN;

  return TX_DATA_OUT; //COMMON_FRAME
}


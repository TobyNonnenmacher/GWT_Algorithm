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
  


  for (int i(0); i <= 2; i++)

    {
      TX_DATA_OUT[i] = TX_DATA_IN[i+13];
    }


  for (int i(3); i <= 16; i++)

    {
      TX_DATA_OUT[i] = TX_DATA_IN[i-3];
    }





  return TX_DATA_OUT; //COMMON_FRAME
}


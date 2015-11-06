#include "reorder.h"
frame str_to_frame(string signal)
{
  frame _frame = 0;
    
  for (int index(0); index <= 127; index++)
    if (signal[127-index] == '1')
      _frame[index] = 1;
    
  return _frame;
}

// spp frame_to_spp(frame frame_in, int spp_no)
// {
//   spp temp;

//   for (int i(0); i < 30; i++)
//     temp[i] = frame_in[30*spp_no + i];
    
//   return temp;
// }

// frame attach_spp_to_frame(frame frame_in, spp attachment, int spp_no)
// {
//   frame frame_out;

//   frame_out = frame_in;
//   // for (int i(0); i < 8; i++)
//   //frame_out[120+i] = frame_in[120+i];
  

//   for (int i(0); i < 30; i++)
//     frame_out[30*spp_no+i] = attachment[i];

//   return frame_out;
}

frame Reorder(frane TX_DATA_IN)
{
 
TX_DATA_OUT = TX_DATA_IN

  return TX_DATA_OUT; //COMMON_FRAME
}


#include "7seg.h"
//#include "logic.h"

int main()
{
  Segment segmento;
  Handler handler(1, &segmento);

  handler.printDisplay(1);
  
  return 0;
}

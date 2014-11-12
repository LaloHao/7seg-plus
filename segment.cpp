#include "segment.h"

Segment::Segment()
{
  // data = emptyData;
  data = testData;
  type = 0;
}

bool Segment::getSegment(int s)
{
  return data[s];
}

void Segment::toggleSegment(int s)
{
  if(s >= SEGA && s <= SEGB)
    data[s] = !data[s];
}

void Segment::toggleType()
{
  type = !type;
}

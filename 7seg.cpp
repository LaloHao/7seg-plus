#include "7seg.h"

Handler::Handler(int q, Segment *s)
{
  segment = s;
  quantity = q;
}

void Handler::printDisplay(int d)
{
  static std::string lines[5];
  static int i;

  lines[0] = segment->getSegment(SEGA)? " __" : "   ";
  lines[1] = (segment->getSegment(SEGF)? "|" : " ");
  lines[1] += "  ";
  lines[1] += (segment->getSegment(SEGB)? "|" : " ");
  lines[2] = segment->getSegment(SEGF)? "|" : " ";
  lines[2] += segment->getSegment(SEGG)? "__" : "  ";
  lines[2] += segment->getSegment(SEGB)? "|" : " ";
  lines[3] = segment->getSegment(SEGE)? "|" : " ";
  lines[3] += "  ";
  lines[3] += segment->getSegment(SEGC)? "|" : " ";
  lines[4] = segment->getSegment(SEGE)? "|" : " ";
  lines[4] += segment->getSegment(SEGD)? "__" : "  ";
  lines[4] += segment->getSegment(SEGC)? "|" : " ";

  std::cout << lines [0] << std::endl;
  std::cout << lines [1] << std::endl;
  std::cout << lines [2] << std::endl;
  std::cout << lines [3] << std::endl;
  std::cout << lines [4] << std::endl;

 }

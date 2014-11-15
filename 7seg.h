#ifndef HANDLER_H
#define HANDLER_H
#include <iostream>
#include <string>
#include "segment.h"

class Handler
{
 private:
  Segment *segment;
  int quantity;
 public:
  Handler(int,Segment *);
  void printDisplay(int);
};

#endif /* HANDLER_H */

#ifndef SEGMENT_H
#define SEGMENT_H

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

static bool emptyData[] = {0, 0, 0,0,
			   0, 0, 0};

static bool testData[] = {1, 1, 1, 0,
			  1, 1, 1};

typedef enum {SEGA, SEGB, SEGC, SEGD,
              SEGE, SEGF, SEGG} segment_values;

class Segment
{
 private:
  bool *data;
  bool type;
 public:
  Segment();
  bool getSegment(int);
  void toggleSegment(int);
  void toggleType();
};

#endif /* SEGMENT_H */

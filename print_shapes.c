#include "draw.h"               /* for font */
#include "stdio.h"              /* for putchar */

void print_arrow(char c)
{
  c -= 0x20;
  for (char col = 0; col < 12; col++) {
    unsigned short rowBits = font_8x12[c][col];
    for (char iterateBit = 0; iterateBit < 12; iterateBit++) {
      unsigned short colMask = 1 << (11-iterateBit); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}

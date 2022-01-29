#include <stdlib.h>
#include <ultra64.h>

#include "area.h"

u32 random_number(u32 n) {
    if ((n - 1) == RAND_MAX) {
        return rand();
    }
    else {
        u32 end = RAND_MAX / n;
        end *= n;

        u32 r;
        while ((r = rand()) >= end);

        return r % n;
  }
}

void set_seed(s16 seed) {
    srand(seed);
}
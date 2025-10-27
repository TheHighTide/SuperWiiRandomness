#ifndef RANDOMNESS_H
#define RANDOMNESS_H

#include <stdlib.h>
#include <time.h>

void init_random();

int get_random_in_range(int min, int max);

#endif
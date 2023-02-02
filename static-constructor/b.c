#include <stdio.h>

#include "a.h"

int x = -1;

__attribute__((constructor)) void set() { x = 1; }
void fun() { printf("%d\n", x); }

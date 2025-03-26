// 3.26.2025
// STATUS: COMPLETE

/*
An extension of the new.c project, implementing a "class" in C.
*/

#include <stdio.h>

// This represents the fields of the "class".
typedef struct _OBJ { int x, y, z; } OBJ;

// Defining the loop header.
int NUM_ITEMS;
#define ITER_OBJ_AL for (int x = 0; x < NUM_ITEMS; x++)
void printVals(OBJ *objs) { ITER_OBJ_AL { printf("%d %d %d\n", objs[x].x, objs[x].y, objs[x].z); } }

// The methods of the "class".
OBJ OBJ_new(int x, int y, int z) { OBJ obj = {x, y, z}; return obj; }

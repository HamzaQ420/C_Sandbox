// 3.26.2025
// STATUS: COMPLETE

/*
The idea is to replicate the "new" keyword from Java into C.
Which has the purpose of creating a new "object" without needing a declared variable in main().
*/

#include <stdio.h>
#include <stdlib.h>
#include "OBJ.h"

// Not relevant to project focus.
OBJ *add(OBJ *objs, OBJ obj) {
    // Cloning the original AL.
    OBJ *obj_CLONE = malloc(sizeof(OBJ) * NUM_ITEMS); ITER_OBJ_AL { obj_CLONE[x] = objs[x]; }
    // Adding a value.
    NUM_ITEMS++; objs = realloc(objs, sizeof(OBJ) * NUM_ITEMS); printf("\n");
    ITER_OBJ_AL { objs[x] = obj_CLONE[x]; } free(obj_CLONE);
    objs[NUM_ITEMS - 1] = obj;
    return objs;
}

int main () {
    NUM_ITEMS = 3; OBJ *objs = malloc(sizeof(OBJ) * NUM_ITEMS);
    ITER_OBJ_AL { objs[x] = OBJ_new(x, x * 2, x * 3); }
    ITER_OBJ_AL { printf("%d %d %d\n", objs[x].x, objs[x].y, objs[x].z); }

    // Anything beyond this point is completely unnecessary for the project's focus, more so relates to the ARRAYLIST project in the preceding directory.

    objs = add(objs, OBJ_new(NUM_ITEMS, NUM_ITEMS * 2, NUM_ITEMS * 3));
    objs = add(objs, OBJ_new(NUM_ITEMS, NUM_ITEMS * 2, NUM_ITEMS * 3)); printVals(objs);
    objs = add(objs, OBJ_new(NUM_ITEMS, NUM_ITEMS * 2, NUM_ITEMS * 3)); printVals(objs);
    objs = add(objs, OBJ_new(NUM_ITEMS, NUM_ITEMS * 2, NUM_ITEMS * 3)); printVals(objs);
    objs = add(objs, OBJ_new(NUM_ITEMS, NUM_ITEMS * 2, NUM_ITEMS * 3)); printVals(objs);
    objs = add(objs, OBJ_new(NUM_ITEMS, NUM_ITEMS * 2, NUM_ITEMS * 3)); printVals(objs);
    objs = add(objs, OBJ_new(NUM_ITEMS, NUM_ITEMS * 2, NUM_ITEMS * 3)); printVals(objs);

    free(objs);
    return 0;
}

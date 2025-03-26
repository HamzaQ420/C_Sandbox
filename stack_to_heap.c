// 2.18.2025

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
The idea of this quick project is finding a way to retrieve input from the user and place it in an allocated memory space that is not bound by a constant size.
This is achieved using a buffer of a constant size, that then copies the input from its stack to the heap where it is given its own, manually allocated space.
Once that is done, the buffer is cleared and the pointer of the allocated heap array is stored alongside the string's length.
*/

// Returning the pointer of a string.
char *retInput() {
    const int BUFFER_SIZE = 50; char buffer[BUFFER_SIZE];
    fgets(buffer, sizeof(buffer), stdin); // Sending the input to the buffer.
    // Checking all the filled/initialized values within the buffer.
    int ARR_LENGTH = 0; for (int x = 0; x < BUFFER_SIZE && buffer[x] != 0; x++) ARR_LENGTH++;
    // Initializing an array with EXACTLY the number of memory spaces required to fill the str variable. Using realloc could reallocate the space.
    char* str = malloc(ARR_LENGTH); for (int x = 0; x < ARR_LENGTH - 1; x++) str[x] = buffer[x];
    // Flushing the buffer.
    memset(buffer, 0, sizeof(buffer));
    //printf("%s - %d - %p\n", str, ARR_LENGTH, str);
    return str;
}

int main() {
    // FIXME: New problem, store ALL strings in a single array, you will need the size of every string as well as their values returned by retInput(). Good Luck!
    for (int x = 0; x < 3; x++) printf("%p\n", retInput());
    return 0;
}

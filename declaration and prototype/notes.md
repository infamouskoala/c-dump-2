# COMPILING MULTIPLE SOURCE FILES INTO ONE

- The function defination exists in testfile.h and the prototype is defined in testfile.c
- Prototype is located in `testfile.c` and the declaration has been done in `testfile.h`. I could have declared and coded the prototype for the function in `testfile.h` but that will limit my code to modern compilers only. A good habit is to make header files for declaring and defination and to make a c file for the prototypes and function body.

### COMPILING WITH GCC

Good practice: 
```shell
gcc main.c testfile.c -o main
``` 

Works but isn't a good practice:
```c
#include "testfile.c"
```
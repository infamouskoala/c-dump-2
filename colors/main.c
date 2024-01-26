#include <stdio.h>
#include "colors.h"

int main(){
    char string[100];
    printf("input string (< 100 words): ");
    fgets(string, 100, stdin);
    printf(RED"%s", string);
    printf(GRN"%s", string);
    printf(MAG"%s", string);
    printf(BLU"%s", string);
    printf(YEL"%s", string);
    printf(CYN"%s", string);
    printf(WHT"%s", string);
    printf(reset);
}
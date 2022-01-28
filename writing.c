#include <stdio.h>
main() {
FILE *ux;

ux = fopen("/home/public/7dayC/writing/theultimatefile.txt", "w");
fprintf(ux, "THIS IS THE ULTIMATE TEXT THAT YOU WANTED TO SEE");

fclose(ux);

}

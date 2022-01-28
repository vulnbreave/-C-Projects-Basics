#include <stdio.h>
main() {
FILE *ty;
int check;
ty = fopen("/home/public/7dayC/reading/thetext.txt","r");
check = getc(ty);

while(check != EOF) {
putchar(check);
check = getc(ty);
}
fclose(ty);
}


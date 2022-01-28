#include <stdio.h>
int g = 60;
main() {
int h = 20;
int end;

end = sum(g,h);
printf("the total here %d", end);
}

int sum(int g, int h) {
return g+h;
}

#include <stdio.h>

extern int age;
extern age = 20;
extern char really[15] = "vegetables";

 main(){

print_this();

return 0;

}


print_this(){

	printf("i have is what %s\n" ,really);
	printf("the veggies cost %d" ,age);


}





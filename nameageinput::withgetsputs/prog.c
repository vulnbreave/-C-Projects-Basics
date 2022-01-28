#include <stdio.h>
main() {
char name[15];
int age;

printf("Enter your name: ");
gets(name);
printf("The name youve entered is ", name);
puts(name);

printf("Enter your age: ");
gets(age);

printf("The age youve entered is ", age);
puts(age);
}


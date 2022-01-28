#include <stdio.h>
main() {
printf("Welcome there !! , Here we test your age . Before you enter to this metaverse\n\n");
the_repeat();
the_actual();

}

the_repeat() {
int age;
printf("Enter your age please sir/madam: ");
scanf("%d", &age);

if(age>18) {
printf("YEH BUDDY YOU ARE GOOD TO GO !  !\n\n");
}

else if(age==18) {
printf("HMMMM , this is wrong . . . . . .but meh still its alright , you can go .");
}


else {
printf("SERIOUSLY KID ?!?!?! , GTFO ! Before i call your DAD .\n\n\n\n\n\n\n\n");
}


printf("<+====================================================================================================+>\n\n");

}

the_actual() {
int entered;
printf("If you think you entered the wrong key or wrong age\n");   
printf("Do you want to run the test again?\n");

printf("WARNING !! If your a kid this incident will be reported and Do mind that we y'all are watching you !\n\n");


printf("PRESS [CTRL + C] TO END THIS TEST. OR\n");
printf("PRESS THE KEY AND HIT ENTER TO CONTINUE.\n\n\n");
printf("1 -- TO RUN THE THE TEST AGAIN(!!WARNING!!)\n ");
printf("2 -- TO EXIT OUT OF THE TEST.\n");
scanf("%d", &entered);



while(entered == 1) {
the_repeat();
break;
}

while(entered == 2) {
printf("YOU PROBABLY A KIDDO . .Good bye !"); 
break;
}
}

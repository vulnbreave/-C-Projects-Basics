#include <stdio.h>
main() {
int score;

printf("Enter your final PUBG score: ");

scanf("%d", &score);

if(score>=90) {
printf("YAYYY! YOU MADE TO THE LEADERBOARDS!! KUDOS!");
}

else if(score == 80) {
printf("VICTORY ROYALE");

}

else if(score>=70) {
printf("CHICKEN DINNER!!!");
}

else if(score>100 && score > 200) {
printf("ENTER A VALID SCORE DUDE?!?! DONT CHEAT !!!");
}

else{
printf("oops BETTER LUCK NEXT TIME");

} 

return 0;

}

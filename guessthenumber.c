#include<stdio.h>
#include<time.h>
#include<stdlib.h>
// Guess the number
void main(){

int num,c=1,guess;
srand(time(0));
num=rand()%100+1;

printf("============================\n");
printf("WELCOME TO GUESS THE NO. GAME\n");
printf("============================\n");
//printf("%d\n",num);
do{
printf("Enter a no. from 1 to 100:\n");
scanf("%d",&guess);
if(guess>num){
    printf("lower no. please\n");
}
else if(guess<num){
    printf("Higher no. please\n");
}
else{
    printf("You got the no. in %d attempts",c);
}
c++;
}while(guess!=num);

}

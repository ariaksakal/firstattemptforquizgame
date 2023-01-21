#include <stdio.h>
void function(char question[],int point);



int main(){
    char answer;
    int con;
    int p1, p2, p3, p4;
    int a1 , a2,a3,a4;
    int total;

   printf("Welcome to quiz game for start please press 1\n");
   printf("For exit please press -1");
   scanf("%d", &answer);

   if(answer == -1){
       printf("Process is end");
       return 0;
   }

   else (answer == 1);{
       printf ("Game is starting for every correct answer you'll get 10 points\n");
       printf("There are 10 questions you can see your points on the leader board\n");
   }
   if(answer == 1){
       printf("WHAT IS THE YEAR OF THE BERSERK 1ST CHAPTER ?\n");
       printf("1)1989\n2)1990\n3)1991\n4)1988");
       scanf(" %c",&answer);
   if(answer == 'A'){
       printf("Correct you got 10 points");
       total += 10;
       printf("for second question press 2\n");
       scanf("%d",&con);
   }
   else{
       printf("Sorrry Your Answer is wrong\n");
       total += 0;
       printf("for second question press 2");
       scanf("%d",&con);
   }
   if(con == 2){
       printf("When Google is inventeed ?\n");
       printf("1)1999\n2)1991\n3)1989\n4)1999");
       scanf(" %c",&answer);
   if(con == 'C'){
       printf("Correct you got 10 points\n");
       total += 10;
   }
   else{
       printf("Wrong sorry");
       total += 0;
   }
   }
       printf("QUESTIONS ARE END YOUR TOTAL POINT IS %d",total);

   }





















}

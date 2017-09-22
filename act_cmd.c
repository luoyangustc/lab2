#include <stdio.h>
#include <string.h>
#define TRUE 0

void act_cmd(void);

int main(void)
{
    while (2)
       act_cmd();
    return 0;    
}

void act_cmd()
{
    char str[8][8] = {"quit","ll","cd","read","write","vi","touch","git"};
    char input[8];
    
    printf("Plesse input your command:");
    scanf("%s",input);

    if (TRUE == strcmp(input,str[0]))
         printf("Please quit!\n");

    else  if (TRUE ==  strcmp(input,str[1]))
         printf("Please show all directories!\n");

    else  if (TRUE == strcmp(input,str[2]))
         printf("Please coming in the dir!\n");

    else  if (TRUE == strcmp(input,str[3]))
         printf("Please read the file!\n");
     

    else  if (TRUE == strcmp(input,str[4]))
         printf("Please write into the file!\n");

    else  if (TRUE == strcmp(input,str[5]))
         printf("Please establish a floder!\n");

    else  if (TRUE == strcmp(input,str[6]))
         printf("Please establish an another floder! !\n");

    else  if (TRUE == strcmp(input,str[7]))
         printf("Please show your code on the internet!\n");

    else 
         printf("No command you will show and please input again!");
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
void username_password(void){

char user[50], pass[50];
int checker = 0;
    printf("\n\n\t\t\t\t\t __________________________\n");
    printf("   \t\t\t\t\t|                          |\n");
    printf("   \t\t\t\t\t|******** SIGN  IN ********|\n");
    printf("   \t\t\t\t\t|__________________________|\n");

do {
        printf("\n\t\t\t\t\tPlease enter your User ID: ");
        scanf("%s", &user);
        printf("\t\t\t\t\tPlease enter your password: ");
        scanf("%s", &pass);

        if(strcmp(user, "PRINON")==0)
        {
           if(strcmp(pass, "prinon69420")==0){
            printf("\n\t\t\t\t\tLOGIN SUCCESS!");
            checker = 1;
           }
           else
            printf("\t\t\t\t\tPassword is incorrect!");
        }
        else
            printf("\t\t\t\t\tWrong User ID!");
}
 while(checker == 0);

 printf("YOU'RE SUCCESSFULLY LOGGED IN");
return 0;
}

}



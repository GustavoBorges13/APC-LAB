#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void get_ID_and_PASS(char fileName[30],char *id,char *pass)
{
    FILE *F = fopen(fileName,"r");

    if(F)
    {
        int count = 0;
        while(!feof(F))
        {
            char rawLine[50];
            fscanf(F,"%s",rawLine);
            if(!count++)
                strcpy(id,rawLine);
            else
                strcpy(pass,rawLine);

        }
    }else printf("Cannot open this file");
    fclose(F);
}

int main()
{
    char fileName[30] = "users.txt";
    char userID[50],userPassW[50];
    char strID[50]="\0",strPASSW[50]="\0";
    char IDpref[50] = "user_id:\0",PASSWpref[50] = "password:\0";
    get_ID_and_PASS(fileName,userID,userPassW);
    char c;
    int pos = 0;
        printf("\n\n");
        printf("\tLOGIN SECURITY SYSTEM IN C USING TEXT FILES");
        printf("\n\n");
        printf("\tEnter User Name      : ");
        scanf("%s",&strID);
        printf("\n");
        printf("\tEnter Your Password  : ");
        do {
        c = getch();

        if( isprint(c) ) 
        {
            strPASSW[ pos++ ] = c;
            printf("%c", '*');
        }
        else if( c == 9 && pos )
        {
            strPASSW[pos--] = '\0';
            printf("%s", "\b \b");
        }
    } while( c != 13 );
        strcpy(strID,strcat(IDpref,strID));
        strcpy(strPASSW,strcat(PASSWpref,strPASSW));

        if (!strcmp(strID,userID)&&!strcmp(strPASSW,userPassW))
        {
            printf("\n\n");
            printf("\tCorrect Username And Password\n");
            printf("\n\n\tWelcome to the System\n\n"); 
        }
        else
        {
           printf("\n\n");
           printf("\tInvalid Username And Password. Try Again\n\n");
         }
     printf("\n\n");
     printf("\tEND OF PROGRAM");
     printf("\n\n");
     system("pause");
}
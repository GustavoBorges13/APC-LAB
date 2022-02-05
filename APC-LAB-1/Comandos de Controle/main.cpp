#include <stdio.h>
#include <ctypes.h>
#include <stdlib.h>
//banco de dados para alunos...
#define CLASSES 3
#define GRADES 30
int grade [CLASSES][GRADES];

void enter_grades(void);
int get_grade(int num);
void disp_grades(int g[][GRADES]);

int main (void){
  char ch, str[80];

  for(;;){
    do{
        printf("(D)igitar notas\n");
        printf("(M)ostrar notas\n");
        printf("(S)air\n");
        gets(str);
        ch = toupper(*str);
    } while(ch!='D' && ch!= 'M' && ch!= 'S');

    switch(ch){
    case 'D':
        enter_grades();
        break;
    case 'M':
        disp_grades(grade);
        break;
    case 'S':
        exit(0);
    }
  }
}

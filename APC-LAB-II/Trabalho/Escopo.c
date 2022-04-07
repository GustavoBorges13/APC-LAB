#include <stdio.h>

int main(void){
    char usuario_digitado[32],senha_digitada[32];
    char user_validar[32],password_validar[32];

    FILE *file = fopen("logins.txt","r");

    if (file ==  NULL){
        printf("Arquivo não pode ser aberto\n");
        system("pause");
        return 0;
    }

    printf("\nUsuario: ");
    scanf("%s",usuario_digitado);
    printf("Senha: ");
    scanf("%s",senha_digitada);

    fscanf(file,"Usuário: %s | Senha: %s",user_validar, password_validar);

    if(strcmp(usuario_digitado,user_validar)==0 && strcmp(senha_digitada,password_validar)==0){
        printf("\nUsuario e senha CORRETOS :D\n");
    }else{
        printf("\nUsuario e senha INCORRETOS D:\n");
    }

    printf("\n\n");
    system("pause");
    return 0;
}
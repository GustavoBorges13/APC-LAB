#include <stdio.h>
#include <conio.h>

void reverse(char s[]) {
    if (s[0] != '\0') {
        reverse(&s[1]);
        printf("%c",s[0]);
    }
}

int main(void) {
    char str[100], c;
    printf("\nDigite a string para reverter: ");
    scanf("%s",str);
    reverse(str);
    return 0;
}

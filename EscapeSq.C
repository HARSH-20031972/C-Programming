#include<stdio.h>
int main() {
    printf("1)Hello\nWorld\n");//1)Newline \n
    printf("2)Hello\tWorld\n");//2)Tabspace \t
    printf("3)Hello\bWorld\n");//3)Backspace \b
    printf("Hello\r4)World\n");//4)Carriage Return \r
    printf("5)Hello\\World\n");//5)print/ 
    printf("6)Hello\"World\"\n");//6)print""
    printf("7)Hello\'World\'\n");//7)print''
    return 0;
}
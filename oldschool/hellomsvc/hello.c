#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void){
    puts("enter your name:");
    char name[100];
    scanf("%s", name);
    printf("hello %s", name);
}
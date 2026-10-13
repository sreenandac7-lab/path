#include<stdio.h>
#include<string.h>
int main(){
char word[]="sreenanda";
for (int i=0; word[i] !='\0'; i++){
    printf("word[%d]=%c\n",i, word[i]);
}
return 0;
}

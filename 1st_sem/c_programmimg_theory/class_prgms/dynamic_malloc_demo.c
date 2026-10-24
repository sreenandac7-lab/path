#include<stdio.h>
#include<stdlib.h>
int main(){
    // space for 5 integers
    int x=5;
    int*p;
    p=(int*)malloc(5*sizeof(int));
    if(p==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("memory allocated successfully!\n");
    // Store values in dynamically allocated memory
    for (int i = 0; i < 5; i++) {
        p[i] = (i + 1) * 10;
    }

    // Display the values
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    free(p);
    return 0;
}
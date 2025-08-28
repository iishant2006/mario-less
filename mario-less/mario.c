#include <stdio.h>

int main(){
    int h;
    printf("Enter the height of the triangle: ");
    scanf("%d", &h);

    // To reprompt again for eery inalid input
    for (; h<=1;){
        printf("Enter the height of the triangle: ");
        scanf("%d", &h);
    }

    for (int i = 1; i <= h; i++){
        // i = rows
        // j = columns, hehe

        int spaces = h - i;
        for (int k = 0; k <= spaces; k++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
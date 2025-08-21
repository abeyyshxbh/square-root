#include <stdio.h>

int main(){
    int choice;
    float a, b;

    printf("menu:\n");
    printf("1. add\n 2. subtract\n 3. multiply\n 4. divide\n");
    printf("enter your choice (1-4): ");
    scanf("%d", &choice);

    scanf("%f %f", &a, &b);

    switch (choice) {
     case 1:
            printf("result = %.2f", a + b);
            break;
     case 2:
         printf("result = %.2f", a - b);
         break;
     case 3:
         printf("result = %.2f", a * b);
         break;
     case 4:
        if (b !=0)
            printf("result = %.2f", a / b);
        else
            printf("error: division by zero!");
        break;
     default:
        printf("invaild chioce.");
}
    return 0;
}

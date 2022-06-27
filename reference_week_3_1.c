/*
If and relations and flow of control
Ahnaf Johari
2022 June 25th
*/

#include <stdio.h>

int main(void) {
    int speed;

    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);

    if(speed < 65)
        printf("\nNo speeding ticket\n\n");
    else
        printf("\nSpeeding Ticket\n\n");

    return 0;
}
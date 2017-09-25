#include <iostream>
#include <cstring>

#define PRICE_NEW_GEAR 15
#define PRICE_Used_GEAR 5

int main() {
    int gear_option = 1;
    char buy_used;

    while (gear_option != 3) {
        int pieces_new = 0;
        int pieces_used = 0;
        printf("What would you like to do?\n");
        printf("1. Buy New Gear.\n");
        printf("2. Buy Used Gear.\n");
        printf("3. Quit.\n");
        scanf(" %c", &gear_option);
        if (gear_option == 1) {
            printf("How many pieces of new gear would you like to buy? ");
            scanf("%d", &pieces_new);
        } else if (gear_option == 2) {
            printf("How many pieces of used gear would you like to buy? ");
            scanf("%d", &pieces_used);
        } else if (gear_option == 3){

        } else {
            printf("That is not a valid choice");
        }
    }
}
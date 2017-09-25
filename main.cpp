#include <iostream>
#include <cstring>

#define PRICE_NEW_GEAR 15
#define PRICE_USED_GEAR 5

int main() {
    int gear_option = 1;
    char buy_used;

    float final = 0;
    int total_new_gear = 0;
    int total_used_gear = 0;
    while (gear_option != 3) {
        int num_pieces_new = 0;
        int num_pieces_used = 0;

        printf("What would you like to do?\n");
        printf("1. Buy New Gear.\n");
        printf("2. Buy Used Gear.\n");
        printf("3. Quit.\n");
        scanf("%d", &gear_option);
        if (gear_option == 1) {
            printf("How many pieces of new gear would you like to buy? ");
            scanf("%d", &num_pieces_new);
            total_new_gear += num_pieces_new;
//            final += PRICE_NEW_GEAR * num_pieces_new;
        } else if (gear_option == 2) {
            printf("How many pieces of used gear would you like to buy? ");
            scanf("%d", &num_pieces_used);
            total_used_gear += num_pieces_used;
//            final += PRICE_USED_GEAR * num_pieces_used;
        } else if (gear_option == 3) {
            int total_gold = (total_new_gear*PRICE_NEW_GEAR + total_used_gear*PRICE_USED_GEAR);
            printf("Your cost in %d gold pieces\n", total_gold);
            printf("You obtained %d new and %d used\n", total_new_gear, total_used_gear);
            float average = total_gold / (total_new_gear + total_used_gear);
            printf("Average %.2f", average);
        } else {
            printf("That is not a valid choice");
        }
    }
}
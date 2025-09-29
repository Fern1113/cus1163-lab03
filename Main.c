#include <stdio.h>
#include <stdlib.h>
#include "process_manager.h"

void print_menu() {
    printf("\n=== Process Management Lab ===\n");
    printf("1. Basic producer-consumer demo\n");
    printf("2. Multiple producer-consumer pairs\n");
    printf("3. Exit\n");
    printf("Choose an option (1-3): ");
}

int main() {
    int choice;

    printf("Lab 3: Basic Process Management (fork and wait)\n");
    printf("Focus: Understanding process creation and cleanup\n");

    while (1) {
        print_menu();

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("\nStarting basic producer-consumer demonstration...\n");
            if (run_basic_demo() == 0) {
                printf("\nSUCCESS: Basic producer-consumer completed!\n");
            } else {
                printf("\nERROR: Basic producer-consumer failed!\n");
            }
            break;

            case 2:
                printf("\nRunning multiple producer-consumer pairs...\n");
            if (run_multiple_pairs(2) == 0) {
                printf("\nSUCCESS: Multiple pairs completed!\n");
            } else {
                printf("\nERROR: Multiple pairs failed!\n");
            }
            break;

            case 3:
                printf("\nGoodbye!\n");
            exit(0);

            default:
                printf("Invalid choice. Please select 1-3.\n");
            continue;
        }
    }

    return 0;
}
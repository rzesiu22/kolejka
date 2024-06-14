#include <iostream>
#include <stdio.h>
#include "queue.h"

void menu(void) {
    printf("\n");
    printf("1 - Add number to queue\n");
    printf("2 - Read first number from queue\n");
    printf("3 - Delete number from queue\n");
    printf("4 - Check if the queue is empty\n");
    printf("5 - Check if the queue is full\n");
    printf("6 - Exit program\n");
    printf("\n");
}

int main() {
    int temp = 0;
    int option = 0;
    printf("Queue - static array implementation\n");
    while(1) {
        menu();
        scanf("%d", &option);

        switch(option) {
            case 1:
                if(!isQueueFull() ){
                    printf("Enter value :");
                    scanf("%d", &temp);
                    add(temp);
                }
                else{
                    printf("Operation not allowed - Queue is full!!!\n\n");
                }
                break;
            case 2:
                if (!isQueueEmpty() ) {
                    temp = first();
                    printf("Read value: %d", temp);
                }
                else{
                    printf("Operation not allowed - Queue is empty!!!\n\n");
                }
                break;
            case 3:
                if(!isQueueEmpty() ){
                    temp = remove();
                    printf("Read value: %d", temp);
                }
                else {
                    printf("Operation not allowed - Queue is empty!!!\n\n");
                }
                break;
            case 4:
                if (isQueueEmpty()) {
                    printf("Queue is empty.\n");
                }
                else {
                    printf("Queue isn't empty.\n");
                }
                break;
            case 5:
                if (isQueueFull()) {
                    printf("Queue is full.\n");
                }
                else {
                    printf("Queue isn't full.\n");
                }
                break;
            case 6:
                return 0;
            default:
                printf("Pick the right option\n");
                break;
        }
    }
    return 0;
}
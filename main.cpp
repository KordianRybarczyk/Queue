#include <stdio.h>
#include "Queue.h"

void menu(void)
{
    printf("\n");
    printf("1 -(Add)\n");
    printf("2 -(First)\n");
    printf("3 -(remove)\n");
    printf("4 -Is queue empty?\n");
    printf("5 -Is queue full?\n");
    printf("6 -END\n");
}

int main() {
    int temp = 0;
    int option = 0;
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
                    printf("Queue is full\n");
                }
                break;
            case 2:
                if (!isQueueEmpty() ) {
                    temp = first();
                    printf("Read value: %d", temp);
                }
                else{
                    printf(" Queue is empty!!!\n\n");
                }
                break;
            case 3:
                if(!isQueueEmpty() ){
                    temp = remove();
                    printf("Read value: %d", temp);
                }
                else {
                    printf("Queue is empty!!!\n\n");
                }
                break;
            case 4:
                if (isQueueEmpty()) {
                    printf("Queue is empty.\n");
                }
                else {
                    printf("Queue is not empty.\n");
                }
                break;
            case 5:
                if (isQueueFull()) {
                    printf("Queue is full.\n");
                }
                else {
                    printf("Queue is not full.\n");
                }
                break;
            case 6:
                return 0;
            default:
                printf("Choose the rigth option\n");
                break;
        }
    }
    return 0;
}
#include <malloc.h>
#include <stdio.h>
#include "order.h"
int selectCategory(Menu *menu) {
    int choice = -1;
    while (choice < 0 || choice > menu->totalCategories) {
        printf("Please Select a Category: [press 0 to End]\n");
        for (int i = 0; i < menu->totalCategories; ++i) {
            printf("%d) %s\n", i + 1, menu->categories[i].name);
        }
        printf("Choose [1-%d]:", menu->totalCategories);
        scanf("%d", &choice);
        if (choice < 0 || choice > menu->totalCategories + 1) {
            printf("wrong choice, it should be between 1 to %d or 0 to exit", menu->totalCategories);
        }
    }
    return choice-1;
}


int selectFoodItem(Menu *menu, int categoryId) {
    int choice = -1;
    FoodList *foodList = &menu->foodList[categoryId];
    while (choice < 0 || choice > foodList->totalFoodItems) {
        printf("Please Select Food Item: [press 0 to End]\n");
        for (int i = 0; i < foodList->totalFoodItems; ++i) {
            printf("%d) %s ... Rs. %d/-\n", i + 1, foodList->foods[i].name, foodList->foods[i].rate);
        }
        printf("Chose [1-%d]: ", foodList->totalFoodItems);
        scanf("%d", &choice);
    }
    return choice -1;
}

Orders* askForOrders(Menu *menu){
    Orders* orders = (Orders*) malloc(sizeof (Orders));
    OrderNode *currentNode = NULL;
    orders->firstNode = NULL;
    orders->totalAmount = 0;
    fillMenu(menu);
    printf ("Welcome to Tomato App.\n\n");
    do {
        int qty = 0;
        int categoryId = selectCategory(menu);
        if (categoryId == -1) break;
        int foodId = selectFoodItem(menu, categoryId);
        if (foodId == -1) break;
        Food *food = &menu->foodList[categoryId].foods[foodId];
        printf("You have selected : %s. Entry quantity [press 0 to remove this order from orders list]\n", food->name);
        printf("Quantity:");
        scanf("%d", &qty);
        if (qty < 1) {
            printf("Order: %s removed from your list\n", food->name);
        } else {
            Order *order = (Order*)malloc(sizeof (Order));
            order->food = food;
            order->qty = qty;
            orders->totalAmount += (qty * food->rate);
            if (currentNode == NULL) {
                currentNode = (OrderNode*) malloc(sizeof (OrderNode));
                currentNode->nextNode = NULL;
                currentNode->order = order;
                orders->firstNode = currentNode;
            } else {
                OrderNode* newNode = malloc(sizeof (OrderNode));
                newNode->nextNode = NULL;
                newNode->order = order;
                currentNode->nextNode = newNode;
                currentNode = newNode;
            }
        }
    } while (1);

    return orders;
}

void printSummary (Orders* orders) {
    printf("Your Orders:\n");
    int i = 1;
    OrderNode *orderNode = orders->firstNode;
    while(orderNode != NULL) {
        Order * order = orderNode->order;
        int qty = order->qty;
        Food* food = order->food;
        printf("%d) %s (Rs. %d/- x %d)\n", i++, food->name, food->rate, qty);
        orderNode = orderNode->nextNode;
    }
    printf("=============================================\n");
    printf("Total: Rs. %d/-\n", orders->totalAmount);
    printf("Thank you ordering food with us.");
}
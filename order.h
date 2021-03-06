#ifndef __ORDER_H_
#define __ORDER_H_
#include "menu.h"
typedef struct {
    Food *food;
    int qty;
}Order;

typedef struct {
    Order * order;
    void* nextNode;
} OrderNode;

typedef struct {
    OrderNode* firstNode;
    int totalAmount;
} Orders;

Orders* askForOrders(Menu *menu);
int selectCategory(Menu *menu);
int selectFoodItem(Menu *menu, int categoryId);
void printSummary (Orders* orders);

#endif
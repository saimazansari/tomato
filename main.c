#include <stdio.h>
#include <malloc.h>
#include "menu.h"
#include "order.h"
int main() {
    Menu * menu = malloc (sizeof (Menu));
    Orders* orders = askForOrders(menu);
    printSummary(orders);
    return 0;
}
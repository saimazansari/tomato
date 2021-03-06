#include <malloc.h>
#include "menu.h"
#include "category.h"
#include <string.h>
void fillMenu (Menu *pMenu) {
    pMenu->totalCategories = 7;
    Category *pCategoryArray = malloc(sizeof (Category) * pMenu->totalCategories);
    FoodList *foodList = malloc(sizeof (foodList) * pMenu->totalCategories);

    int categoryId=0;

    strcpy(pCategoryArray[categoryId].name, "Recommended");
    fillRecommended(&foodList[categoryId], &pCategoryArray[categoryId]);
    categoryId++;

    strcpy(pCategoryArray[categoryId].name, "Combos");
    fillCombos(&foodList[categoryId], &pCategoryArray[categoryId]);
    categoryId++;

    strcpy(pCategoryArray[categoryId].name, "Breakfast Special");
    fillBreakfastSpecial(&foodList[categoryId], &pCategoryArray[categoryId]);
    categoryId++;

    strcpy(pCategoryArray[categoryId].name, "Soups");
    fillSoups(&foodList[categoryId], &pCategoryArray[categoryId]);
    categoryId++;

    strcpy(pCategoryArray[categoryId].name, "Starters");
    fillStarters(&foodList[categoryId], &pCategoryArray[categoryId]);
    categoryId++;

    strcpy(pCategoryArray[categoryId].name, "Main Course");
    fillMainCourse(&foodList[categoryId], &pCategoryArray[categoryId]);
    categoryId++;

    strcpy(pCategoryArray[categoryId].name, "Beverages");
    fillBeverages(&foodList[categoryId], &pCategoryArray[categoryId]);
    categoryId++;

    pMenu->categories = pCategoryArray;
    pMenu->foodList = foodList;
}
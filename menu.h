#ifndef __MENU_H_
#define __MENU_H_
enum FOOD_TYPE {
    VEG,
    NON_VEG,
};
typedef struct {
    char name[128];
}Category;

typedef struct {
    enum FOOD_TYPE foodType;
    Category *category;
    char name[128];
    int rate;
} Food;

typedef struct {
    int totalFoodItems;
    Food* foods;
} FoodList;

typedef struct {
    int totalCategories;
    Category *categories;
    FoodList *foodList;
} Menu;

void fillMenu (Menu *pMenu);

#endif
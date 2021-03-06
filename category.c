#include "category.h"

void fillRecommended(FoodList *foodList, Category* category) {
    foodList->totalFoodItems = 34;
    Food *pFoodArray = (Food*)malloc(sizeof(Food) * foodList->totalFoodItems);
    int idx = 0;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Chilly Kepsa"); pFoodArray[idx++].rate = 480;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Schezwan Kepsa"); pFoodArray[idx++].rate = 560;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Tikka Kepsa"); pFoodArray[idx++].rate = 630;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Murg Mussallam"); pFoodArray[idx++].rate = 510;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Lucky Special"); pFoodArray[idx++].rate = 480;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Schezwan Kepsa"); pFoodArray[idx++].rate = 480;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Kepsa"); pFoodArray[idx++].rate = 850;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Arbi Chicken Kepsa"); pFoodArray[idx++].rate = 580;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name,  "Paneer Chilly Kepsa"); pFoodArray[idx++].rate = 480;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Panner Tikka Biryani [500 grams, Serves 3]"); pFoodArray[idx++].rate = 875;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Vegetable Biryani"); pFoodArray[idx++].rate = 775;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Biryani"); pFoodArray[idx++].rate = 220;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name,  "Tandoori Chicken"); pFoodArray[idx++].rate = 160;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Biryani"); pFoodArray[idx++].rate = 250;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name,  "Chicken Tikka Biryani"); pFoodArray[idx++].rate = 250;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Boneless Butter Chicken"); pFoodArray[idx++].rate = 260;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Boneless Chicken Biryani"); pFoodArray[idx++].rate = 380;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Butter Chicken"); pFoodArray[idx++].rate = 260;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Egg Biryani"); pFoodArray[idx++].rate = 180;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Tandoori Lollipop [8 Pieces]"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Tikka [8 Pieces]"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Biryani Combo"); pFoodArray[idx++].rate = 250;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Fried Rice"); pFoodArray[idx++].rate = 320;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Biryani Combo"); pFoodArray[idx++].rate = 290;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Keema"); pFoodArray[idx++].rate = 250;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Seekh Biryani [Boneless]"); pFoodArray[idx++].rate = 410;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Crispy"); pFoodArray[idx++].rate = 380;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Boneless Butter Chicken Biryani"); pFoodArray[idx++].rate = 410;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Dal Khichdi"); pFoodArray[idx++].rate = 170;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Kepsa"); pFoodArray[idx++].rate = 530;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Caramel Custard"); pFoodArray[idx++].rate = 90;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Hyderabadi"); pFoodArray[idx++].rate = 360;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Seekh Kabab"); pFoodArray[idx++].rate = 400;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Spring Roll [8 Pieces]"); pFoodArray[idx++].rate = 270;
    foodList->foods = pFoodArray;
}

void fillCombos(FoodList *foodList, Category *category) {
    foodList->totalFoodItems = 8;
    Food *pFoodArray = (Food*) malloc(sizeof(Food) * foodList->totalFoodItems);
    int idx = 0;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Biryani Combo"); pFoodArray[idx++].rate = 230;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Pulao Combo"); pFoodArray[idx++].rate = 230;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Egg Biryani Combo"); pFoodArray[idx++].rate = 230;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Biryani Combo"); pFoodArray[idx++].rate = 250;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Tikka Biryani Combo"); pFoodArray[idx++].rate = 280;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Pulao Combo"); pFoodArray[idx++].rate = 250;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Biryani Combo"); pFoodArray[idx++].rate = 290;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Pulao Combo"); pFoodArray[idx++].rate = 290;
    foodList->foods = pFoodArray;
}

void fillBreakfastSpecial(FoodList *foodList, Category *category){
    foodList->totalFoodItems = 17;
    Food *pFoodArray = (Food*) malloc(sizeof(Food) * foodList->totalFoodItems);
    int idx = 0;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "French Toast [2 Pieces]"); pFoodArray[idx++].rate = 110;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Bread Butter"); pFoodArray[idx++].rate = 40;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Bread Butter Jam"); pFoodArray[idx++].rate = 50;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Bread Slice [3 Pieces]"); pFoodArray[idx++].rate = 20;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Bread Pav [2 Pieces]"); pFoodArray[idx++].rate = 20;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Broun Pav [2 Pieces]"); pFoodArray[idx++].rate = 25;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Broun Maska Pav [2 Pieces]"); pFoodArray[idx++].rate = 40;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Bun Maska [2 Pieces]"); pFoodArray[idx++].rate = 70;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "French Fries"); pFoodArray[idx++].rate = 150;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Sandwich"); pFoodArray[idx++].rate = 90;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Aloo Paratha"); pFoodArray[idx++].rate = 100;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Bhurji"); pFoodArray[idx++].rate = 310;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Keema"); pFoodArray[idx++].rate = 250;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Keema Ghotala"); pFoodArray[idx++].rate = 280;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Keema Mutter"); pFoodArray[idx++].rate = 280;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Keema Egg Fry"); pFoodArray[idx++].rate = 290;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Cheese Omlet"); pFoodArray[idx++].rate = 140;
    foodList->foods = pFoodArray;
}

void fillSoups(FoodList *foodList, Category *category) {
    foodList->totalFoodItems = 15;
    Food *pFoodArray = (Food*) malloc(sizeof(Food) * foodList->totalFoodItems);
    int idx = 0;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Palak Soup"); pFoodArray[idx++].rate = 180;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Plain Soup"); pFoodArray[idx++].rate = 180;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Tomato Soup"); pFoodArray[idx++].rate = 180;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Plain Soup"); pFoodArray[idx++].rate = 190;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Plain Soup"); pFoodArray[idx++].rate = 210;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Paya Soup"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Sweet Corn Soup"); pFoodArray[idx++].rate = 190;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Manchow Soup"); pFoodArray[idx++].rate = 190;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Talumein Soup"); pFoodArray[idx++].rate = 200;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Hot and Sour Soup"); pFoodArray[idx++].rate = 190;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Sweet Corn Soup"); pFoodArray[idx++].rate = 200;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Manchow Soup"); pFoodArray[idx++].rate = 200;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Hot and Sour Soup"); pFoodArray[idx++].rate = 200;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Talumein Soup"); pFoodArray[idx++].rate = 210;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Prawns Talumein Soup"); pFoodArray[idx++].rate = 220;
    foodList->foods = pFoodArray;
}

void fillStarters(FoodList *foodList, Category *category) {
    foodList->totalFoodItems = 22;
    Food *pFoodArray = (Food*) malloc(sizeof(Food) * foodList->totalFoodItems);
    int idx = 0;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Tandoori Aloo [8 Pieces]"); pFoodArray[idx++].rate = 200;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Tikka [8 Pieces]"); pFoodArray[idx++].rate = 320;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Malai Paneer Tikka [8 Pieces]"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Hariyali Kabab [9 Pieces]"); pFoodArray[idx++].rate = 250;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Achari Tikka [8 Pieces]"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Tandoori Chicken"); pFoodArray[idx++].rate = 160;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Tandoori Arabi Chicken"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Tandoori Schezwan Chicken"); pFoodArray[idx++].rate = 290;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Seekh Kabab"); pFoodArray[idx++].rate = 370;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Tandoori Chicken Malai Chops [3 Pieces]"); pFoodArray[idx++].rate = 430;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Tangdi Kabab [3 Pieces]"); pFoodArray[idx++].rate = 430;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Reshmi Tikka [8 Pieces]"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Tikka [8 Pieces]"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Hazari Kabab [8 Pieces]"); pFoodArray[idx++].rate = 350;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Kali Mirch Kabab [8 Pieces]"); pFoodArray[idx++].rate = 350;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Achari Kabab [8 Pieces]"); pFoodArray[idx++].rate = 340;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Banjari Kabab [8 Pieces]"); pFoodArray[idx++].rate = 350;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Malai Tikka [8 Pieces]"); pFoodArray[idx++].rate = 350;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Tandoori Lollipop [8 Pieces]"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Seekh Kabab"); pFoodArray[idx++].rate = 400;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Pahadi Kebab"); pFoodArray[idx++].rate = 350;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mutton Chops [6 Pieces]"); pFoodArray[idx++].rate = 450;
    foodList->foods = pFoodArray;
}

void fillMainCourse(FoodList *foodList, Category *category) {
    foodList->totalFoodItems = 29;
    Food *pFoodArray = (Food*) malloc(sizeof(Food) * foodList->totalFoodItems);
    int idx = 0;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Aloo Gobhi Masala"); pFoodArray[idx++].rate = 290;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Jeera Aloo"); pFoodArray[idx++].rate = 290;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Aloo Matar"); pFoodArray[idx++].rate = 290;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Mughlai"); pFoodArray[idx++].rate = 290;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Matar"); pFoodArray[idx++].rate = 310;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Palak"); pFoodArray[idx++].rate = 310;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Bhurji"); pFoodArray[idx++].rate = 310;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Butter Masala"); pFoodArray[idx++].rate = 310;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Kadai"); pFoodArray[idx++].rate = 320;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Paneer Tikka Masala"); pFoodArray[idx++].rate = 320;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Shahi Paneer Korma"); pFoodArray[idx++].rate = 320;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Vegetable Jaipuri"); pFoodArray[idx++].rate = 310;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Makhanwala"); pFoodArray[idx++].rate = 310;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = VEG; strcpy(pFoodArray[idx].name, "Veg Kolhapuri"); pFoodArray[idx++].rate = 320;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Masala Fry"); pFoodArray[idx++].rate = 320;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Korma"); pFoodArray[idx++].rate = 340;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Do Pyaza"); pFoodArray[idx++].rate = 340;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Afghani"); pFoodArray[idx++].rate = 340;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Dahiwala"); pFoodArray[idx++].rate = 380;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Saghwala"); pFoodArray[idx++].rate = 340;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Cutlet"); pFoodArray[idx++].rate = 220;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Seekh Kabab Masala"); pFoodArray[idx++].rate = 350;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Egg Fry"); pFoodArray[idx++].rate = 220;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Lucky Special Chicken boneless"); pFoodArray[idx++].rate = 430;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "White Chicken"); pFoodArray[idx++].rate = 360;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Chilli Hot Masala"); pFoodArray[idx++].rate = 330;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Boneless Butter Chicken"); pFoodArray[idx++].rate = 260;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Kolhapuri"); pFoodArray[idx++].rate = 360;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chicken Hyderabadi"); pFoodArray[idx++].rate = 360;
    foodList->foods = pFoodArray;
}

void fillBeverages(FoodList *foodList, Category *category){
    foodList->totalFoodItems = 18;
    Food *pFoodArray = (Food*) malloc(sizeof(Food) * foodList->totalFoodItems);
    int idx = 0;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mango Pulp Milkshake"); pFoodArray[idx++].rate = 200;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Kesar Milkshake"); pFoodArray[idx++].rate = 180;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Strawberry Milkshake"); pFoodArray[idx++].rate = 200;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Chocolate Milkshake"); pFoodArray[idx++].rate = 200;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Vanilla Milkshake"); pFoodArray[idx++].rate = 190;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Rose Milkshake"); pFoodArray[idx++].rate = 160;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Cold Coffee Milkshake"); pFoodArray[idx++].rate = 150;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Cold Coffee Milkshake with Ice Cream"); pFoodArray[idx++].rate = 170;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Coke Can [300 ml]"); pFoodArray[idx++].rate = 55;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Pepsi Can [250ml]"); pFoodArray[idx++].rate = 55;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Diet Can [300 ml]"); pFoodArray[idx++].rate = 70;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Sweet Lassi"); pFoodArray[idx++].rate = 100;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Salted Lassi"); pFoodArray[idx++].rate = 100;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mango Pulp Lassi"); pFoodArray[idx++].rate = 140;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Fresh Lime"); pFoodArray[idx++].rate = 70;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Soda"); pFoodArray[idx++].rate = 50;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Mosambi Juice"); pFoodArray[idx++].rate = 150;
    pFoodArray[idx].category = category; pFoodArray[idx].foodType = NON_VEG; strcpy(pFoodArray[idx].name, "Pineapple Juice"); pFoodArray[idx++].rate = 150;
    foodList->foods = pFoodArray;
}

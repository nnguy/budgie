#include "ingredient.h"
#include <vector> 
#ifndef RECIPE_H_
#define RECIPE_H_

class Recipe{
private:
Ingredient list_of_ingredients[3]; 
public:
Recipe(); 
Recipe(Ingredient, Ingredient, Ingredient); 
};


#endif
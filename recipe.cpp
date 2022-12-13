#include "recipe.h"
#include <iostream> 
using namespace std; 

Recipe::Recipe(){
  
}
Recipe::Recipe(Ingredient a, Ingredient b, Ingredient c){
  list_of_ingredients[0] = a; 
  list_of_ingredients[1] = b; 
  list_of_ingredients[2] = c; 
}
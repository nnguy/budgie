#include <iostream>
#include "recipe.h" 
#include "ingredient.h"
#include "advisor.h"
int main() {
  Ingredient chicken(meat, 10.25, .25); 
  Ingredient brocolli(vegetable, 2.34, .10); 
  Ingredient potato(starch, .99, -.10); 
  Ingredient spaghetti(starch, 1.00, 0); 

  Recipe chicken_brocolli_potato(chicken, brocolli, potato); 

  Advisor a;
  a.setFoodChoice(); 
  a.setBudget(); 
  
  
  
}
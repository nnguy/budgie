#ifndef ADVISOR_H_
#define ADVISOR_H_
#include "recipe.h"
#include "ingredient.h"

class Advisor{
private:
  Recipe r;
  int foodChoice; 
  int budgetChoice; 
public: 
  void setFoodChoice(); 
  void setBudget(); 
  
};
#endif
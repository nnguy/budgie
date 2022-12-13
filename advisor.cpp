#include <iostream> 
#include "advisor.h" 

using namespace std; 

void Advisor::setFoodChoice(){
  cout << "What do you want to eat? " 
<< "Enter one of the following "
<< "1 - Meat" << endl
<< "2 - Vegetables" << endl
<< "3 - Grains" << endl;
  cin >> foodChoice;
  
}

void Advisor::setBudget(){
  cout << "What is your budget? " << endl
  << "Enter one of the following " << endl
  << "1 - Limited Budget - Something cheap" << endl 
  << "2 - Not So Limited - Suggest something discounted " << endl;
  cin >> budgetChoice; 
}

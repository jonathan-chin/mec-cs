/*AOAOA

Midterm

Purpose

To demonstrate working mastery of key concepts in C++

Task

It's a random weekend and you have decided to cook a nice meal for yourself. You have an entree and side that are both prepped and ready to go into the oven. However, because they are different dishes, they have different starting temperatures, target temperatures, burnt temperatures, and heating rates. Before you put them in, you want to make sure that one won't burn before the other is ready and decide to use the C++ skills you've been learning in our course to check before you turn anything on. Write a C++ program that:

1. Prompts the user to enter the name of the entree. You can assume the user does not use any whitespace.

2. Prompts the user to enter the starting temperature of the entree. Your program must validate this input and make sure that it is greater than 32 (the freezing temperature in Fahrenheit) and lower than 200 (a reasonable ceiling temperature).

3. Prompts the user to enter the target temperature of the entree. This is the temperature at which it is considered done and can be removed form the oven. Your program must validate this input and make sure that it is greater than the starting temperature and lower than 200.

4. Prompts the user to enter the burnt temperature of the entree. This is the temperature at which it is no longer edible. Your program must validate this input and make sure that it is greater than the target temperature and lower than 200.

5. Prompts the user to enter heating rate of the entree. This is the number of degrees it increases by per minute in the oven. Your program must validate this input and make sure that it is greater than 0.

6. Repeat steps 1-5 for the side dish.

7. Print out a table showing the progress of each dish by the minute as they are heating up. You should display 3 columns: the minute, the temperature of the entree, and the temperature of the side dish. Starting at minute 0, the temperatures of each should be the starting temperatures. The table should continue to print until both dishes are hotter than their target temperatures.

8. Finally, you should determine if either dish is burnt. If at least one dish is burnt, print out a message saying "Dinner is ruined!". If none of them are burnt, print out a message saying "Bon Appetit!"

Your program must use at least one do-while loop.

Note: you can assume that for all of the temperature inputs, the user only inputs decimal numbers and does not make any typos.

*/

#include <iostream>

int main() {
  std::string entree_name;
  double entree_start_temp, // use double in case there are decimals
    entree_target_temp,
    entree_burnt_temp,
    entree_heating_rate;

  std::cout << "What is the name of your entree? ";
  std::cin >> entree_name;

  do{
    std::cout << "What is the entree starting temp? ";
    std::cin >> entree_start_temp;
  }while(entree_start_temp < 32 || entree_start_temp > 200);

  do{
    std::cout << "What is the entree target temp? ";
    std::cin >> entree_target_temp;
  }while(entree_target_temp <= entree_start_temp || entree_target_temp > 200);

  do{
    std::cout << "What is the entree burnt temp? ";
    std::cin >> entree_burnt_temp;
  }while(entree_burnt_temp < entree_target_temp || entree_burnt_temp > 200);

  do{
    std::cout << "What is the entree heating rate? ";
    std::cin >> entree_heating_rate;
  }while(entree_heating_rate < 0);

  std::cout << "Entree name: " << entree_name << "\n";
  std::cout << "Entree starting temp: " << entree_start_temp << "\n";
  std::cout << "Entree target temp: " << entree_target_temp << "\n";
  std::cout << "Entree burnt temp: " << entree_burnt_temp << "\n";
  std::cout << "Entree heating rate: " << entree_heating_rate << "\n";
  


  std::string side_name;
  double side_start_temp, // use double in case there are decimals
    side_target_temp,
    side_burnt_temp,
    side_heating_rate;

  std::cout << "What is the name of your side? ";
  std::cin >> side_name;

  do{
    std::cout << "What is the side starting temp? ";
    std::cin >> side_start_temp;
  }while(side_start_temp < 32 || side_start_temp > 200);

  do{
    std::cout << "What is the side target temp? ";
    std::cin >> side_target_temp;
  }while(side_target_temp <= side_start_temp || side_target_temp > 200);

  do{
    std::cout << "What is the side burnt temp? ";
    std::cin >> side_burnt_temp;
  }while(side_burnt_temp < side_target_temp || side_burnt_temp > 200);

  do{
    std::cout << "What is the side heating rate? ";
    std::cin >> side_heating_rate;
  }while(side_heating_rate < 0);

  std::cout << "Side name: " << side_name << "\n";
  std::cout << "Side starting temp: " << side_start_temp << "\n";
  std::cout << "Side target temp: " << side_target_temp << "\n";
  std::cout << "Side burnt temp: " << side_burnt_temp << "\n";
  std::cout << "Side heating rate: " << side_heating_rate << "\n";
  
  int current_minute = 0;
  double entree_current_temp = entree_start_temp;
  double side_current_temp  = side_start_temp;

  std::cout << "minute\t" << entree_name << "\t" << side_name << "\n";
  while(entree_current_temp < entree_target_temp || side_current_temp < side_target_temp){
    std::cout << current_minute << "\t" << entree_current_temp << "\t" << side_current_temp << "\n";
    current_minute++;
    entree_current_temp += entree_heating_rate;
    side_current_temp += side_heating_rate;
  }
  // need to print out last minute
  std::cout << current_minute << "\t" << entree_current_temp << "\t" << side_current_temp << "\n";

  if(entree_current_temp >= entree_burnt_temp
     || side_current_temp >= side_burnt_temp){
    std::cout << "Dinner is ruined!\n";
  }else{
    std::cout << "Bon Appetit!\n";
  }
  
}

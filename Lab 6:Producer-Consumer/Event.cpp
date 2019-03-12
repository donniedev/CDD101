#include "Event.h"
#include <iostream>
#include <stdlib.h>

Event::Event(){
  variable = 'a' + rand()%26;
  std::cout << variable;
}

bool Event::consume(){
  char betterVariable = variable - 32;
  std::cout << betterVariable;
}

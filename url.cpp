#include <iostream>
#include <cstring>
 
int main ()
{
  char str[] = "https://vk.com/im?peers=c105_c159_379367598"; 
  
  std::cout << "Разделение строки '" << str <<  "'\n";
  char * pch = strtok (str,"/&?:#"); 
  while (pch != NULL)  
  {
      std::cout << pch  << "\n";
      pch = strtok (NULL, "/&?:#");
  }
  return 0;
}
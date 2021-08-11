#include <iostream>
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include "headers/sayhello.h"


int main() {

  sayhello();

  int years = 60;
  int fortnights = 26*years;

  std::vector<float> year_vec(years,0);
  std::vector<float> fortnight_vec(fortnights,0);

  gen_random_vec(year_vec);

  distribute_year_vec(year_vec, fortnight_vec);

 int i;
   std::cout << "Year vec ---------------------------------------\n" ; 
 for(i = 1; i <= years; i++){
   printf("%10.3f \n",year_vec[i]); 

 }

   std::cout << "fortnight_vec vec ---------------------------------------\n" ; 
 for(i = 1; i <= years; i++){
   printf("%10.3f \n",fortnight_vec[i]); 
 }


}
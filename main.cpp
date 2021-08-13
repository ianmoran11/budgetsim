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

  account accountIncome;

  account portfolio[3];

 account portfolio1;

 portfolio[1] =  portfolio1;
 portfolio[2] =  portfolio1;
 portfolio[3] =  portfolio1;




}
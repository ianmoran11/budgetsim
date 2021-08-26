#include <vector>
#include <iostream>
#include "../headers/headers.h"

std::vector<float> init_random_vec(int years, float mu, float sigma)
{

  int fortnights = 26*years;

  std::vector<float> year_vec(years,1);
  std::vector<float> fortnight_vec(fortnights,1);

  gen_random_vec(year_vec, mu, sigma);
   
  distribute_year_vec(year_vec, fortnight_vec);

  return fortnight_vec;

};

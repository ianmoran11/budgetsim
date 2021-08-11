#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <random>
#include <iostream>
#include <memory>
#include <functional>
#include <numeric>

void distribute_year_vec(std::vector<float> &year_vec,std::vector<float> &fortnight_vec){
  int i; 
  int max_i = year_vec.size();
  
  for(i = 0; i <= max_i; i++ ){
    fortnight_vec[i*26] = year_vec[i];
  }

  int j; 
  int max_j= fortnight_vec.size();
  
  for(i = 1; i <= max_j; i++ ){
    fortnight_vec[i] = fortnight_vec[i] + fortnight_vec[i-1];
  }

};



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

std::vector<float> apply_rate_to_vec(std::vector<float> vec,float scalar){
  int length =  vec.size();
  
  for(int i=0; i < length ; ++i){
    vec[i] =  vec[i] * scalar;
  } ;
 return vec;  
}
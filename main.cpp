#include <iostream>
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <fstream>
#include "headers/headers.h"

int main() {
  int j;
  for(j = 0; j < 100; j++){
    int years  = 60;
    account* portfolio[3];
    account transaction( years,0,  0, 1000); account homeloan(years,-100000,0,0); account assets(years,0,9999999999,0); 
    portfolio[0] = &transaction; portfolio[1] = &homeloan; portfolio[2] = &assets;  
    auto n_accounts = sizeof portfolio / sizeof portfolio[0];
  
    int i ;
    for(i = 0; i <= years*26; i++){
      int a  ;
      for(a = 0; a < n_accounts; a++){
        apply_income_to_blance(*portfolio[a], i);
      } 
      for(a = 0; a < n_accounts; a++){
        if(a != 0) transfer_between_accounts(*portfolio[a -1], *portfolio[a], i);
      } 
      for(a = 0; a < n_accounts; a++){
        move_balance_forward(*portfolio[a], i);
      } 
    }
  
    std::ofstream output;
    output.open ("output.csv");
    output << "sim, account1,account2,account3,\n";
    for(i = 0; i <= years*26; i++){
      output << j << ", " ;
      output << portfolio[0]->balance_vec[i] << ", " ;
      output << portfolio[1]->balance_vec[i] << ", " ;
      output << portfolio[2]->balance_vec[i] << ",\n " ;
    }
    output.close();
  } 
}
 #include <random>
 #include <algorithm>
 #include <iterator>
 #include <iostream>
 #include <vector>
 #include <random>
 #include <iostream>
 #include <memory>
 #include <functional>
 #include "../headers/headers.h"
 

void move_balance_forward(account &acnt,int period){
  acnt.balance_vec[period + 1] = acnt.balance_vec[period] + acnt.balance_vec[period] * acnt.interest_vec[period];
};


void apply_income_to_blance(account &acnt,int period){
  acnt.balance_vec[period] = acnt.balance_vec[period] + acnt.income_vec[period];
};
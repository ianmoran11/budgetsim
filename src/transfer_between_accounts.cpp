#include <random>
#include <iterator>
#include <iostream>
#include <vector>
#include <random>
#include <iostream>
#include <memory>
#include <functional>
#include "../headers/headers.h"

void transfer_between_accounts(account &acnt1,account &acnt2,int  period){
 float to_transfer = (acnt1.balance_vec[period] - acnt1.goal > 0 ? acnt1.balance_vec[period]- acnt1.goal : 0) ;
 acnt1.balance_vec[period] = acnt1.balance_vec[period] - to_transfer;
 acnt2.balance_vec[period] = acnt2.balance_vec[period] + to_transfer;
}
#include <iostream>
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include "headers/headers.h"



// int main() {
// 
//   account transaction( 60,0,  0, 3000);  
//
//   printf("%i\n",transaction.years);
//   printf("%f\n",transaction.balance);
//   printf("%f\n",transaction.goal);
//   printf("%f\n",transaction.initial_income);
// 
// }

 int main() {
// int j;
// for(j = 0; j < 1000; j++){

   account* portfolio[3];
 
   //account account1(years_arg = 60,balance_arg =0, goal_arg = 0, initial_income_arg = 3000);  
   account account1( 60,0,  0, 1000);  
   account account2(60,-100000,0,0);  
   account account3(60,0,9999999999,0); 

 //account2.balance_vec[0] = -100000;
// portfolio[0] = &account1; portfolio[1] = &account2; portfolio[2] = &account3;   
// printf("%f\n",portfolio[0]->income_vec[i]);
 
   int i ;
   for(i = 0; i <= 150; i++){
      printf("%9.3f\t",account1.balance_vec[i]);
      printf("%9.3f\t",account2.balance_vec[i]);
      printf("%9.3f\n",account3.balance_vec[i]);
      apply_income_to_blance(account1, i);

      transfer_between_accounts(account1, account2, i);
      transfer_between_accounts(account2, account3, i);

      move_balance_forward(account1, i);
      move_balance_forward(account2, i);
      move_balance_forward(account3, i);


   }

//}
}


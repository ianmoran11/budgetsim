# pragma once

// Declare functions 
std::vector<float> apply_rate_to_vec(std::vector<float> vec,float scalar);
void distribute_year_vec(std::vector<float> &year_vec,std::vector<float> &fortnight_vec);
void gen_random_vec(std::vector<float> &x, float mu, float sigma);
std::vector<float> init_random_vec(int years, float mu, float sigma);

class account
{
private:
public:

   int years ; 
   float goal ;
   float initial_income ; 
   
   int periods =years * 26 ;  

   float balance  ;
   std::vector<float> balance_vec = init_random_vec(60,0,0);
   std::vector<float> interest_vec = init_random_vec(60, 0.02,0.02);
   std::vector<float> income_growth_vec = init_random_vec(60,1.02,0.02);
   std::vector<float> income_vec = apply_rate_to_vec(income_growth_vec,initial_income);

  account(int years_arg, float balance_arg, float goal_arg, float initial_income_arg){
    years =years_arg;
    balance = balance_arg ;
    goal = goal_arg ;
    initial_income = initial_income_arg ;

    interest_vec = init_random_vec(60, 0.02,0.02);
    income_growth_vec = init_random_vec(60, 1.02,0.02);
    income_vec = apply_rate_to_vec(income_growth_vec,initial_income);


    balance_vec = init_random_vec(60,0,0);
    balance_vec[0] = balance_arg;
  }

};

void move_balance_forward(account &acnt,int period);
void transfer_between_accounts(account &acnt1,account &acnt2, int period);
void apply_income_to_blance(account &acnt,int period);




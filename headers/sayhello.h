# pragma once

void sayhello();
void gen_random_vec(std::vector<float> &x);
void distribute_year_vec(std::vector<float> &year_vec,std::vector<float> &fortnight_vec);

class account
{
private:
public:
    int years = 60 ; 
    int periods =years * 26 ;  
   double balance = 0.0 ;
   double goal = 0.0 ;
   double interest_rate = 0.01 ;
};

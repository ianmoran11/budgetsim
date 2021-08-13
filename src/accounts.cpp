#include <iostream>




int create_income_stream(double initial_fornightly_flow, double annual_growth_rate, double  dated_discount_array, int period_no, double increment_variance)
{
   int years_no ;
   years_no = period_no/26;
   int yearly_flow [years_no];

   for (size_t i = 0; i < years_no; i++)
   {
       yearly_flow[i] = initial_fornightly_flow *  (1 + (i * annual_growth_rate));
   }
return 0;
}


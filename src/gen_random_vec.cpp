#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <random>
#include <iostream>
#include <memory>
#include <functional>

using namespace std;

void gen_random_vec(vector<float> &x)
{
  int N=(x).size();
  uniform_real_distribution<float> unif(0.0,1.0);
  mt19937 re(time(NULL));
  auto generator = std::bind(unif,re);
  generate_n((x).begin(),N,generator);
}
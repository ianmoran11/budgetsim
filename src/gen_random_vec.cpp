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

void gen_random_vec(vector<float> &x, float mu , float sigma )
{
  int N=(x).size();
  normal_distribution<float> unif(mu,sigma);
  std::random_device rd;
  mt19937 gen(rd());
  auto generator = std::bind(unif, std::ref(gen));
  generate_n((x).begin(),N,generator);
}
#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;

int weights[N];
int n = 0;
int tot_weight = 0;
 
int recur_search(int i, int cur_tot) {
  if (i >= n) 
    return abs(2 * cur_tot - tot_weight);
  return min(recur_search(i + 1, cur_tot + weights[i]),
	      recur_search(i + 1, cur_tot));    
}



int main() {
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> weights[i];
    tot_weight += weights[i];
  }
  cout << recur_search(0, 0) << endl;
}

#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

// study on vectors
int main() {
  // Lets Study Again
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> data = {10, 20, 30};
  for (auto x : data)
    cout << x << " ";
  cout << endl;
  // adds 100 to the end of the array
  data.emplace(data.begin() + 1, 100);

  for (auto x : data)
    cout << x << " ";
}

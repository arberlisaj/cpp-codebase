#include <iostream>

using namespace std;

int n, x, xum;
int missing_number() {

  cin >> n;

  for (int i = 1; i <= n; i++)
    xum ^= i;

  for (int i = 0; i < n - 1; i++) {
    cin >> x;
    xum ^= x;
  }

  cout << xum << endl;

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

double m, h, bmi;

int main() {
  cin >> m >> h;
  bmi = m / (h * h);
  if (bmi < 18.5)
    cout << "Underweight";
  else if (bmi < 24)
    cout << "Normal";
  else
    cout << bmi << endl << "Overweight" << endl;
  return 0;
}
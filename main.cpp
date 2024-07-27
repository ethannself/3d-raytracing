typedef float Point[3];
#include <iostream>
using namespace std;

int main() {
  Point corners[8] = {
      {0, 0, 0},  {12, 0, 0},  {12, 8, 0},  {0, 8, 0},
      {0, 0, 10}, {12, 0, 10}, {12, 8, 10}, {0, 8, 10},
  };
  cout << (int)corners[1][0] << '\n';
  return 0;
}
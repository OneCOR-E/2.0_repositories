#include <iostream>

int main() {

using namespace std;
cout << "side = ?\n";
double square_side;
cin >> square_side;

double square_P = square_side * 4;
double square_S = square_side * square_side;

cout << "P " << square_P <<endl;
cout << "S " << square_S <<endl;

return 0;

}
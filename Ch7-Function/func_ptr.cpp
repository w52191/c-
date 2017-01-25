#include <iostream>

using namespace std;

double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

int main(){
  int code;

  cout << "How many lines of code are there? ";
  cin >> code;
  cout << "Besty's estimation:\n";
  estimate(code, betsy);
  cout << "Pam's estimation:\n";
  estimate(code, pam);
  return 0;
}

double betsy(int x){
  return 0.05 * x;
}
double pam(int x){
  return 0.03 * x + 0.0004 * x * x;
}

void estimate(int lines, double (*pf)(int)){
  cout << lines << " lines will take ";
  cout << (*pf)(lines) << " hours\n";
}

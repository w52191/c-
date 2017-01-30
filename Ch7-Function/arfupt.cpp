#include <iostream>

using namespace std;

const double *f1(const double arr[], int);
const double *f2(const double [], int);
const double *f3(const double *arr, int);

int main(){
  double arr[]={0.121,0.221,0.321};
  const double *(*pa)(const double *, int);
  pa = f1;
  auto pb = f2;
  auto pc = f3;

  cout << "Using pointers to function:\n";
  cout << *(*pa)(arr, 1) << ", ";
  cout << *(*pb)(arr, 2) << ", ";
  cout << *(*pc)(arr, 3) << endl;

  const double * (*pt[3])(const double *, int) = {f1,f2,f3};
  cout << "Using array of pointers to function:\n";
  cout << *(*pt[0])(arr, 1) << ", ";
  cout << *pt[1](arr, 2) << ", ";
  cout << *(*pt)(arr, 3) << endl;
  
  const double * (*(*pr)[3])(const double *, int) = &pt;
  cout << "Using pointer to pointers to function:\n";
  cout << *(*(*pr)[0])(arr, 1) << ", ";
  cout << *(*pr)[1](arr, 2) << ", ";
  cout << *(*pr)[2](arr, 3) << ", " << endl;
  return 0;
}

const double *f1(const double arr[], int n){
  return arr;
}
const double *f2(const double *arr, int n){
  return arr + 1;
}
const double *f3(const double arr[], int n){
  return arr + 2;
}

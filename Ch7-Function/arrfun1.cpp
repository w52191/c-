#include <iostream>

using namespace std;
const int arrSize = 8;
int sum_arr(int [], int);

int main(){
  int cookies[arrSize] = {1,2,4,8,16,32,64,128};
  int sum = sum_arr(cookies, arrSize);
  cout << "The total cookies are:\n";
  cout << sum << endl;
  return 0;
}

int sum_arr(int arr[], int n){
  int result = 0;
  for(int i = 0; i < n; i++){
    result = result + arr[i];
  }
    return result;
}

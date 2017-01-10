#include <iostream>

using namespace std;
const int arrSize = 8;
int fill_arr(int arr[], int limit);

int main(){
  int cookies[arrSize] = {1,2,4,8,16,32,64,128};
  int cnt = fill_arr(cookies, arrSize);
  cout << "The total cookies are:\n";
  cout << cnt << endl;
  return 0;
}

int fill_arr(int arr[], int limit){
  double temp;
  int i;
  for(i = 0; i < limit; i++){
    cout << "Enter value #" << (i+1) << ": ";
    cin >> temp;
    if(!cin){
      cin.clear();
      while(cin.get() != '\n')
	continue;
      cout << "Bad input.\n";
      break;
    }
    else if(temp < 0)
      break;
    else
      arr[i] = temp;
  }
  return i;
}

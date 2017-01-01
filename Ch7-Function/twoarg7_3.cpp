#include<iostream>
#include<string>

int main(){
  using namespace std;

  char ch;
  string str;
  char arr[10] = "string";
  cout << arr << endl;
  cout << "Please enter a character:" << endl;
  cin >> arr;
  cout << endl;
  cout << arr << endl;
  cout << arr[4];
  return 0;
}

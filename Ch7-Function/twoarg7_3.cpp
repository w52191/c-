#include<iostream>
#include<string>

using namespace std;
void n_char(char, int);

int main(){
  char ch;
  int times;
  //string str;
  //char arr[10] = "string";
  //cout << arr << endl;
  cout << "Please enter a number:" << endl;
  cin >> times;
  while(ch != 'q'){
    cout << "Please enter a character:" << endl;
    cin >> ch;
    cout << endl;
    n_char(ch, times);
    //cout << arr[4];
  }
  return 0;
}

void n_char(char ch, int n){
  while(n--){ //n vs 0 first, then n-1, then goes into the loop
      cout << n << " "; //test n
      cout << ch;
    }
  cout << "value of n:" << n << endl; //test
}

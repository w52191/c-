#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  vector<int>::const_iterator iter;
  vector<int> scores;
  scores.push_back(1500);
  scores.push_back(3500);
  scores.push_back(7500);

  cout << "\nHigh Score:\n";
  for(iter = scores.begin();iter != scores.end(); iter++){
    cout << *iter << endl;
  }

  cout << "\nFinding a score.\n";
  unsigned int score;
  cin >> score;
  iter = find(scores.begin(),scores.end(),score);
  if(iter != scores.end()){
    cout << "Score found.\n";
  }
  else{
    cout << "Score not found.\n";
  }
  
  cout << "\nRandomizing the scores:\n";
  srand(static_cast<unsigned int> (time(0)));
  random_shuffle(scores.begin(),scores.end());
  cout << "\nHigh Score:\n";
  for(iter = scores.begin();iter != scores.end(); iter++){
    cout << *iter << endl;
  }
  
  cout << "\nSorting the scores:\n";
  sort(scores.begin(),scores.end());
  cout << "\nHigh Score:\n";
  for(iter = scores.begin();iter != scores.end(); iter++){
    cout << *iter << endl;
  }
  
  return 0;
}

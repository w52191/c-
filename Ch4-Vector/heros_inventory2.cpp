#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");

  cout << "You have " << inventory.size() << " items.\n";
  cout << "\nYour items: \n";
  for(int i = 0; i< inventory.size(); i++){
    cout << inventory[i] << endl;
  }
  cout << "\nThe items name '" << inventory[0] << "' has ";
  cout << inventory[0].size() << " letters.\n";
  cout << "\nYou trade your sword with a battle axe.";
  inventory[0] = "battle axe";
  cout << "\nYour items: \n";
  for(int i = 0; i< inventory.size(); i++){
    cout << inventory[i] << endl;
  }
  cout << "\nYour shield is destroyed in a fierce battle.";
  inventory.pop_back();
  cout << "\nYour items: \n";
  for(int i = 0; i< inventory.size(); i++){
    cout << inventory[i] << endl;
  }
  inventory.clear();
  if(inventory.empty())
    cout << "You have nothing.\n";
  else
    cout << "You at least have one item.\n";
  return 0;
}

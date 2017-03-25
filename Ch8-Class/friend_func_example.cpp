/********************************
Purpose:
1, learn how does friend function work.
2, test the result without friend: the same in this code
 *******************************/
#include <iostream>
 
using namespace std;
 
class Box {
   double width;
public:
  wt friend void printWidth( Box box );
   void setWidth( double wid );
};

// Member function definition
void Box::setWidth( double wid ) {
   width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth( Box box ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Width of box : " << box.width <<endl;
}
 
// Main function for the program
int main( ) {
   Box box;
 
   // set box width with member function
   box.setWidth(10.0);
   
   // Use friend function to print the wdith.
   printWidth( box );
 
   return 0;
}

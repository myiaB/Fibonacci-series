#include <iostream>
using namespace std;

int main() {
  const int numsToCalculate = 5;
  cout << "This program will calculate " << numsToCalculate
       << " Fibonacci Numbers at a time" << endl;

  int num1 = 0, num2 = 1 , num3 = 3, num4 = 5;
  char wantMore = '\0';
    

  do {
    for (int counter = 0;  counter < numsToCalculate; ++counter) {
      cout << endl;
      cout<< num1 + num2 << " "; 
   
      int num2Temp = num1;
      num1 = num1 + num2;
      num2 = num2Temp;
        
      cout << num3 + num4 << " ";
        
      int num4Temp = num4;
      num4 = num3 + num4;
      num3 = num4Temp;
    }
   
    cout << endl << "Do you want more numbers (y/n)? ";
    cin >> wantMore;
        
  } while (wantMore == 'y');

  cout << "Goodbye!" << endl;
      
  return 0;
}
      
    
#include <iostream>

using namespace std;

int main() {
   char operation;
   double num1, num2;

   cout << "Enter an operator  (+, -, *, /): ";
   cin >> operation;

   cout << "Enter any two digits: ";
   cin >> num1;
   cin >> num2;

   switch (operation) {
       case '+':
           cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
           break;
       case '-':
           cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
           break;
       case '*':
           cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
           break;
       case '/':
           if (num2 == 0) {
               cout << "Error occured, Division by zero is tends to infinity" << endl;
           } else {
               cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
           }
           break;
       default:
           cout << "Invalid operator" << endl;
   }

   return 0;
}
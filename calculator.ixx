//creating fuctional calculator

//i have decided to allow for all operations to show my knowledge of the skill
//I realize this will not bode any extra points just intrested in the mechanics of it


#include <iostream>
using namespace std;

int main() {
    while (true) {//this will allow for the input of infinite choices
        double num1, num2;
        char operation;

        //allow user to input nessecary numbers and operation choice for equation
        cout << "Enter number: ";
        cin >> num1;
        cout << "Enter an operation (+, -, *, /): ";
        cin >> operation;
        cout << "Enter number: ";
        cin >> num2;


        //determine how to solve the equation based on which operation they chose
        double result;
        switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;

            //if they chose 0 as a number in a division equation they wouldnt be able to complete the equation there for we would need to request a new number
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            }
            else {
                cout << "Error: Division by zero" << endl;
                return 1;
            }
            break;
        default:
            cout << "invalid number choice" << endl;
            return 1;

        }
        cout << "Results:  " << result << endl;
    }
    return 0;
}

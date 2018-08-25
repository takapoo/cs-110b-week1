#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char choice;
    float num1, num2;

    cout << "Enter your choice. " << endl;
	cout << " 1. Addition " << endl;
	cout << " 2. Subtraction "  << endl;
	cout << " 3. Square " << endl;
	cout << " 4. SquareRoot " << endl;
	cout << " 5. Cube " << endl;
	cout << " 6. CubeRoot " << endl;
	cout << " 7. Power " << endl;
    cin >> choice;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(choice)
    {
        case '1':
            cout << num1+num2;
            break;

        case '2':
            cout << num1-num2;
            break;

        case '3':
            cout << pow(num1, 2.0);
            break;

        case '4':
            cout << sqrt(num1);
            break;

        case '5':
            cout << pow(num1, 3.0);
            break;

        case '6':
            cout << cbrt(num1);
            break;

        case '7':
            cout << pow(num1, num2);
            
            break;


        default:
            // If the choice is other than, 1, 2, 3, 4, 5, 6, 7, error message is shown
            cout << "Error! Please choose a given choice number";
            break;
    }

    return 0;
}


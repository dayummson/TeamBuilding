#include <iostream>
#include <stdexcept>
#include <limits> // need for clearing input buffer

// using namespace std;

/* nag hardcore ko kay bored gin way ko nag shortcut sa "cout" HAHAHAHHAHA*/
/* FEATURES

    IF USER INPUT IS INVALID IT DOES NOT CAUSE LOOP

*/

// function for checking valid input
double isNumberValid(const std::string &prompt)
{
    double numVal;
    while (true)
    {
        std::cout << prompt; // eg: Enter num1:
        // checks if user input is successful
        if (std::cin >> numVal)
        {
            return numVal;
        }
        else
        {
            std::cerr << "\nInvalid Input. Input must be a number!"
                      << "\n";                                                  // raise an error
            std::cin.clear();                                                   // clear the cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore the user input
        }
    }
}

// function to check if operand if valid
char isCharValid(const std::string &prompt)
{
    char operand;
    while (true)
    {
        std::cout << prompt;
        std::cin >> operand;
        if (operand == '+' || operand == '-' || operand == '/' || operand == '*')
        {
            return operand;
        }
        else
        {
            std::cerr << "\nInvalid Operand. Please input valid operand.";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

// function to check if user want to continue the program
bool getYesOrNo()
{

    char choice;
    while (true)
    {
        std::cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            return true;
        }
        else if (choice == 'n' || choice == 'N')
        {
            return false;
        }
        else
        {
            std::cerr << "\nInvalid Input!";
        }
    }
}

// calling main function
int main()
{

    // automate the process

    do
    {

        double num1 = isNumberValid("Enter num1: ");
        char operation = isCharValid("(+, -, /, *): ");
        double num2 = isNumberValid("Enter num2: ");
        double result;
        try
        {

            switch (operation)
            {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            default:
                std::cout << result;
                break;
            }
            std::cout << "Result: " << result << "\n";
        }
        // catch error
        catch (const std::exception &e)
        {
            std::cerr << e.what() << "\n";
        }
        std::cout << "Do you want to perform another operation? (y/n): ";
    } while (getYesOrNo());
    std::cout << "\nExiting Program...\n";
    return 0;
}
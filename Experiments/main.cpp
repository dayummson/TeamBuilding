#include <iostream>

using namespace std;

int main()
{
    //Variables
    int dayChoice, timeChoice, callDuration;
    float charge;

    //Promt for the user to choose on what day was the call made.
    cout << "What day ws the call made?" << '\n';
    cout << "1.) Weekend" << '\n';
    cout << "2.) Weekday" << '\n';
    cout << "Type the number of your choice: ";

    cin >> dayChoice;

    //Promt for the user to choose if the call was made in either
    //the first half of the day or the latter 
    cout << '\n' << "What time ws the call made?" << '\n';
    cout << "1.) Between 8:00 AM and 6:00 PM" << '\n';
    cout << "2.) Between 6:00 PM and 8:00AM" << '\n';
    cout << "Type the number of your choice: ";
    
    cin >> timeChoice;

    //Promt for call duration
    cout << "What is the duration of the call: ";    

    cin >> callDuration;

    //Swiches based on if the user chose if the call was made on a weekend or on a weekday
    switch (dayChoice)
    {
        case 1:
            charge = callDuration * .15;
            cout << charge;
            break;

        case 2:
            //swiths based on if the user made the call on the first half of the day or the latter
            switch (timeChoice)
            {
                //first half of the day
                // call was made between 8 AM and 6 PM
                case 1:
                    charge = callDuration * .40;
                    cout << charge;
                    break;

                //latter half of the day
                //call was made between 6 PM and 8 AM
                case 2:
                    charge = callDuration * .25;
                    cout << charge;
                    break;
                
                default:
                    break;
            }
            
            break;
        
        default:
            break;
    }

    return 0;
}
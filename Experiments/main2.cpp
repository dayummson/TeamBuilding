#include <iostream>
using namespace std;

int main () {
    string _day;
    int _startTimeCall, callDuration;
    int convertHourToMinutes = callDuration * 60;
    double totalBill;
    
    cout << "\nEnter the day the call was made: ";
    cin >> _day;

    cout << "\nEnter the start time of the call: ";
    cin >> _startTimeCall;

    cout << "\nEnter the duration of the call: ";
    cin >> callDuration;

    switch(_day[0]) {
        case 'M':
        case 'T':
        case 'W':
        case 'F':
            if (_startTimeCall >= 8 && _startTimeCall <= 18) {
                totalBill = convertHourToMinutes * 0.40;

                // print the output
                cout << "\nFor the duration of tha call: " << callDuration;
                cout << "\nTotal bill: " << totalBill;

                break;
            }
            else if ((_startTimeCall >= 18 && _startTimeCall <= 24) || (_startTimeCall >= 1 && _startTimeCall < 8 )) {
                //  computations
                totalBill = convertHourToMinutes * 0.25;
                // print the output
                cout << "\nFor the duration of tha call: " << callDuration;
                cout << "\nTotal bill: " << totalBill;
                break;
            }
        case 'S':
            totalBill = convertHourToMinutes * 0.15;
            // print the output
            cout << "\nFor the duration of tha call: " << callDuration;
            cout << "\nTotal bill: " << totalBill;
            break;

    }

    return 0;
}
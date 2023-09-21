#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

    string _time = "14:14";
    vector <char> charVec = {};

    for (char &c : _time) {
        cout << c << ", ";

        // if (c == ':') {
        //     continue;
        // }
        charVec.push_back(c);
    }


    // printing the content of vector
    for (char &var : charVec) {
        cout << var;
    }

    vector <char> charVec2 = {};

    for (int i = 0; i <=1; i++)
    {
        charVec2.push_back(charVec[i]);
    }


    // printing the content of vector
    // for (char &_ : charVec2) {
    //     cout << '\n' << _;
    // }

    int firstHour, secondHour;
    int intFirstHour, intSecondHour;
    if (charVec2[0] == 0 && charVec2[1] == 0) {
        cout << "Error!";

    }
    else if (charVec2[0] == 0 && charVec2[1] > 0) {
        intSecondHour = charVec2[0];
        int a = stoi(intSecondHour);
        secondHour = charVec2[1] * 60;
        cout << secondHour;
    }
    else if(charVec2[0] > 0 && charVec2[1] == 0) {
        firstHour = charVec2[0] * 10 + charVec2[1];
        cout << firstHour;
    }



    

    
    


    
    return 0;

}
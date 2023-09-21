#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main() {
    string sampleText = "14:13 - 15:30";
    vector <int>


    for (char &c : sampleText) {
        if (c == ' ') {
            continue;
        }
        cout << c << '\n';
    }
    

}
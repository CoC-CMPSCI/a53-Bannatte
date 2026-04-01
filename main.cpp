#include <iostream>
using namespace std;

int main() {
    int begin, end;

    // TODO: prompt user for begin and end values
    // cout << "Enter begin and end values: ";
    cin >> begin >> end;
    int summation = 0;
    
        
    // TODO: loop from begin to end and accumulate sum of even values
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            summation += i;
        }
    }

    cout << "The sum of even values is " << summation << endl;
    return summation;
}

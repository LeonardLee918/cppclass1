#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>
using namespace std;

int func() {
    int s;
    double h;
    double b;
    double x;
    double z;
    cout << "Shape Area Calculator version 0.1 (c) 2005 Mitchell Sample Output, Inc.\n" << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    cout << "1) Triangle\n" << "2) Rectangle\n" << "3) Circle\n" << "4) Square\n" << "5) Quit\n" << "Which shape: ";
    cin >> s;
    if (s == 1) {
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        x = b*h;
        z = x/2;
        cout << "\n\n" << "The area is " << z << "\n";
        func();
    }
    else if (s == 2) {
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        x = b*h;
        cout << "\n\n" << "The area is " << x << "\n";
        func();
    }
    else if (s == 3) {
        cout << "Enter radius: ";
        cin >> b;
        x = pow(b, 2);
        z = 3.14*x;
        cout << "\n\n" << "The area is " << x << "\n";
        func();
    }
    else if (s == 4) {
        cout << "Enter side length: ";
        cin >> b;
        x = pow(b, 2);
        cout << "\n\n" << "The area is " << x << "\n";
    }
    else if (s == 5) {
        cout << "You chose to quit the program.  Exiting now.";
        return 0;
    }
    else {
        cout << "error, please try again";
        return 0;
    }
}

int main() {
    func();
    return 0;
}
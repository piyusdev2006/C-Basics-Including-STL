#include<iostream>
using namespace std;

// Basic enum example
enum Days {
    Monday,     // 0
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday,     // 4
    Saturday,   // 5
    Sunday      // 6
};

// Enum with custom values
enum TrafficLight {
    Red = 1,
    Yellow = 2,
    Green = 3
};

// Enum class (scoped enum) - C++11 feature
enum class Colors {
    Red,
    Green,
    Blue
};

int main() {
    // Basic enum usage
    Days today = Wednesday;
    cout << "Today is day number: " << today << endl;  // Will print 2
    
    // Using enum with switch statement
    switch(today) {
        case Monday:
            cout << "It's Monday!" << endl;
            break;
        case Tuesday:
            cout << "It's Tuesday!" << endl;
            break;
        case Wednesday:
            cout << "It's Wednesday!" << endl;
            break;
        // ... other cases
        default:
            cout << "It's some other day!" << endl;
    }

    // Using enum with custom values
    TrafficLight currentLight = Red;
    cout << "Current traffic light value: " << currentLight << endl;  // Will print 1

    // Using enum class (scoped enum)
    Colors myColor = Colors::Red;
    // cout << myColor;  // Error: no implicit conversion to int
    cout << "My color is: " << static_cast<int>(myColor) << endl;  // Will print 0

    // Enum class prevents name conflicts
    Colors color = Colors::Red;
    TrafficLight light = Red;  // No conflict with Colors::Red

    return 0;
} 
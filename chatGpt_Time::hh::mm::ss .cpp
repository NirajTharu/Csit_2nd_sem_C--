#include <iostream>
using namespace std;

// Structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two time values
Time addTimes(const Time& time1, const Time& time2) {
    Time result;
    int carry = 0;

    // Add seconds
    result.seconds = (time1.seconds + time2.seconds) % 60;
    carry = (time1.seconds + time2.seconds) / 60;

    // Add minutes and carry from seconds
    result.minutes = (time1.minutes + time2.minutes + carry) % 60;
    carry = (time1.minutes + time2.minutes + carry) / 60;

    // Add hours and carry from minutes
    result.hours = time1.hours + time2.hours + carry;

    return result;
}

int main() {
    Time time1, time2, result;

    // Input time 1
    cout << "Enter time 1 (hours minutes seconds): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    // Input time 2
    cout << "Enter time 2 (hours minutes seconds): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;

    // Add the times
    result = addTimes(time1, time2);

    // Display the result
    cout << "Sum of times: " << result.hours << " hours " << result.minutes << " minutes " << result.seconds << " seconds\n";

    return 0;
}

//Addition of time 

#include <iostream>
using namespace std;

// Structure to represent time duration
struct TimeDuration {
    int years;
    int months;
    int weeks;
    int days;
    int hours;
    int minutes;
    int seconds;
};

// Function to add two time durations
TimeDuration addTimeDurations(const TimeDuration& duration1, const TimeDuration& duration2) {
    TimeDuration result;

    result.seconds = duration1.seconds + duration2.seconds;
    result.minutes = duration1.minutes + duration2.minutes;
    result.hours = duration1.hours + duration2.hours;
    result.days = duration1.days + duration2.days;
    result.weeks = duration1.weeks + duration2.weeks;
    result.months = duration1.months + duration2.months;
    result.years = duration1.years + duration2.years;

    // Handle carryover and adjust values
    if (result.seconds >= 60) {
        result.minutes += result.seconds / 60;
        result.seconds %= 60;
    }

    if (result.minutes >= 60) {
        result.hours += result.minutes / 60;
        result.minutes %= 60;
    }

    if (result.hours >= 24) {
        result.days += result.hours / 24;
        result.hours %= 24;
    }

    if (result.days >= 7) {
        result.weeks += result.days / 7;
        result.days %= 7;
    }

    if (result.months >= 12) {
        result.years += result.months / 12;
        result.months %= 12;
    }

    return result;
}

int main() {
    TimeDuration duration1, duration2, result;

    // Input time duration 1
    cout << "Enter time duration 1 (years months weeks days hours minutes seconds): ";
    cin >> duration1.years >> duration1.months >> duration1.weeks >> duration1.days >> duration1.hours >> duration1.minutes >> duration1.seconds;

    // Input time duration 2
    cout << "Enter time duration 2 (years months weeks days hours minutes seconds): ";
    cin >> duration2.years >> duration2.months >> duration2.weeks >> duration2.days >> duration2.hours >> duration2.minutes >> duration2.seconds;

    // Add the time durations
    result = addTimeDurations(duration1, duration2);

    // Display the result
    cout << "Sum of time durations: " << result.years << " years, " << result.months << " months, " << result.weeks << " weeks, " << result.days << " days, " << result.hours << " hours, " << result.minutes << " minutes, " << result.seconds << " seconds\n";

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    // Program introduction and definition.
    cout << endl;
    cout << "*******************************************************************************" << endl;
    cout << "                          Physics: Acceleration" << endl;
    cout << endl;
    cout << "This program will calculate average acceleration (change in velocity" << endl;
    cout << "divided by the time taken to make the change) as shown in the following formula: " << endl;
    cout << "                            a = (v1 - v0)/t" << endl;
    cout << endl;
    cout << "  v0 is the starting velocity (m/s)" << endl << "  v1 is the ending velocity (m/s)" << endl << "  t is the time span (s)" << endl; 
    cout << endl;
    
    // Prompt user for input and store in double variable.
    double v0, v1, t;
    cout << "Input the starting velocity (m/s): ";
    cin >> v0;
    cout << "Input the final velocity (m/s): ";
    cin >> v1;
    cout << "Input the time span (seconds): ";
    cin >> t;
    cout << endl;

    // Output calculation result to the user.
    cout << "The acceleration is: " << (v1 - v0)/t << " meters per second." << endl;
    cout << endl;
    
    // End program.
    return 0;
}
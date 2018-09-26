#include <iostream>
#include <string>
// Include the library that will allow you to convert from string to integer
#include <sstream>

/*
        Using this, I do not have to write std:: before each element that comes from the
        standard library.
*/
using namespace std;


int main() {
        /*-------------------------------
        PART 1 - Reading multiple integers
        --------------------------------*/
        cout << endl << "=========================" << endl;
        cout <<         "=        PART 1         =" << endl;
        cout <<         "=========================" << endl << endl;

  
        // Ask the user for 3 integers as input
        // The user should enter all integers on the same line, pressing enter only once


        // Three integers are declared to be used as the input of the user.
        int int1, int2, int3;
        // This integer is declared to be used in the calculation of the product of the user's inputs.
        int product;

        // The user is asked to input 3 numbers on the same line.
        cout << "Please enter three whole numbers " <<
                "(P.S. after writing a number press space and then write the second " <<
                "number press space again, and, finally, write your last number and press enter): ";
        cin >> int1 >> int2 >> int3;

        // The product of the user's inputs is calculated.
        product = int1 * int2 * int3;

        // The product is output.
        cout << "\nThe product of your inputs is: " << product << endl;

        /*-------------------------------
        PART 2 - Reading strings
        --------------------------------*/
        cout << endl << "=========================" << endl;
        cout <<         "=        PART 2         =" << endl;
        cout <<         "=========================" << endl << endl;

        // Ask the user for three strings and output a haiku poem
        // http://examples.yourdictionary.com/examples-of-haiku-poems.html

        // --> ask user for three sentences and I have to convert those sentences into a haiku.

        // These strings are declared to be used in the haiku.
        string string1, string2, string3;
        
        // The user is asked to input 3 strings (sentences) on the same line.
        cout << "This time, we're making a haiku!" << endl;
        cout << "Please enter three sentences, pressing enter after each one:" << endl << endl;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // The three strings are "gotten".

        getline(cin, string1);

        getline(cin, string2);

        getline(cin, string3);

        cout << "\n     Nice! Here's your haiku:\n" << endl;
        // The haiku is output
        cout << string1 << '\n' << string2 << '\n' << string3 <<endl;     

        /*-------------------------------
        PART 3 - Converting strings
        --------------------------------*/
        cout << endl << "=========================" << endl;
        cout <<         "=        PART 3         =" << endl;
        cout <<         "=========================" << endl << endl;
        
        // The string is declared and assigned a value.
        string myNumber = "1234";

        // This integer will be used to store the string once the string is converted to integer format.
        int myInt;

        // The string is converted to integer format and stored in the integer "myInt".
        stringstream(myNumber) >> myInt;

        // This is the output.
        cout << myNumber << " is an integer";

        // This function doesn't return anything.
        return 0;
}
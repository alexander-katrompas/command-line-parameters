/* this #include brings the prototypes and directive into this code file.
 * DO NOT put any other directives in your cpp files!
 */
#include "main.h"

int main(int argc, char** argv) {
    // arc is a count of the command line parameters passed to your program
    // argv are the actual parameters, stored in a 2D array of characters
    // for example the name of the first parameter is in argv[0], the second in argv[1], and so on
    // the first character of argv[0] is in argv[0][0], the second character in argv[0][1], and so on

    cout << "The number of command line parameters, including the program name itself: " << argc << endl;

    // note that the name of the program is always in argv[0]
    cout << "The name of the program itself is: " << argv[0] << endl;

    // test and report the length of the program name
    int count = 0;
    while(argv[0][count] != '\0'){
        count++;
    }
    cout << "The length of the name of the program is: " << count << endl;
    cout << "The first letter in the program name is: " << argv[0][0] << endl;
    cout << endl;

    // loop through all the command line parameters not including the program name
    if(argc > 1){
        cout << "listing all the command line parameters after the program name..." << endl;
        for(int i=1; i<argc; i++){
            cout << i << ": " << argv[i] << endl;
        }
    } else {
        cout << "There are no command line parameters after the program name." << endl;
    }

    return 0;
}

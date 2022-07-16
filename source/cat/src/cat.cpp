// header files
#include <iostream>
#include <fstream>
#include <string.h>

// namespaces
using namespace std;

// repl
void repl () {
    string input;
    while (getline(cin, input)) {
        cout << input + "\n";
    }
}

// file-based
void read_file (string file_to_read) {
    string file_text;
    string full_file;
    ifstream InputFile(file_to_read);
    while(getline(InputFile, file_text)) {
        cout << file_text + "\n";
    }
}

// main loop
int main (int argc, char** argv) {
    string input;
    if (argc == 1) {
        repl ();
    } else {
        if (strcmp(argv[1], "<") == 0) {
            getline (cin, input);
        } else {
            read_file (argv[1]);
        }
    }
}
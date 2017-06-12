#include <iostream>
#include <fstream>                                                  // for file functions

int main() {
    const int MAX = 80;                             // size of buffer
    char buffer[MAX];                               // character buffer
    std::ifstream infile("TEST.TXT");               // read from file for output
    while (infile)
    {
        infile.getline(buffer, MAX);                // rea a line of text
        std::cout << buffer << std::endl;           // then display it
    }

    system("pause");
    return 0;
}
#include "motivatie.h"

void motivatie::openFile(std::string path) {

    std::ifstream myfile(path);
    if (myfile.is_open())
    {
        while (getline(myfile, text))
        {
            std::cout << text;
        }
        myfile.close();
    }

};

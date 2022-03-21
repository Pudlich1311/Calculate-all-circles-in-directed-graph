/** @file  */

/*
Fundamentals of Computer Programming
Cycle
*/

#include <iostream>
#include <string>

#include "functions.h"
#include "structures.h"


int main(int argc, char* arg[])
{
    if (argc == 5)
    {

        string input, output;
        std::tie(input, output) = files(arg);

        if (input == "" || output == "")
            std::cout << "Write: -g 'Input File' -c 'Output File'" << std::endl;

        else
            if (create(input, output) == 1)
            {
                std::cout << "Could not open file";
            }
 
    }
    else
    {
        std::cout << "Write: -g 'Input File' -c 'Output File'" << std::endl;
    }
   
  
     return 0;
    
}


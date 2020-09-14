#include "RandomNumbers.h"
#include "hexconverter.h"
#include <iostream>
#include <fstream>
using namespace std;
using namespace hoomd;

int main(int argc, char* argv[])
    {
    if (argc != 2)
        {
        std::cerr << "Must provide output file name as command line argument." << std::endl;
        return 1;
        }
    else
        {
        ofstream output_file(argv[1], ios::binary | ios::out);
        for (int i=0; i<10000000; i++)
            {
            RandomGenerator rng = RandomGenerator(45,142424,i);
            auto number = detail::generate_u32(rng);
            output_file.write((char*) &number, sizeof(number));
            }
        output_file.close();
        return 0;
        }

    }

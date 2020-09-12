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
        ofstream output_file(argv[1]);
        RandomGenerator rng = RandomGenerator();
        // write lines with 10 integers per line
        for (int i=0; i<500000; i++)
            {
            // write 8 hex 'digits' per integer, 10 integers per line
            for (int j=0; j<10; j++)
                {
                output_file << int_to_hex(detail::generate_u32(rng));
                }
                output_file << std::endl;
            }
        output_file.close();
        return 0;
        }

    }

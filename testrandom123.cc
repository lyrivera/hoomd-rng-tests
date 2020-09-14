#include "RandomNumbers.h"
#include "hexconverter.h"
#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;
using namespace hoomd;

int main()
    {
    int count = 0;
    for (int i=0; i<1000000000; i++)
        {
        for (int j=0; j<1000000000; j++)
            {
            RandomGenerator rng = RandomGenerator(0xfa870af9, 90, count, 0, 10);
            auto x = detail::generate_u32(rng);
            cout.write(reinterpret_cast<const char*>(&x), sizeof x);
            count++;
            }
        }
    return 0;
    }
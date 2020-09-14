#include "Saru.h"
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
            detail::Saru rng = detail::Saru(105, 1046527, count+7919);
            auto x = rng.u32();
            cout.write(reinterpret_cast<const char*>(&x), sizeof x);
            count++;
            }
        }
    return 0;
    }
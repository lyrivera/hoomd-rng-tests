#include "RandomNumbers.h"
using namespace std;
using namespace hoomd;

int main()
    {
    RandomGenerator rng = RandomGenerator(1,3,4);
    for (int i=0; i<1000; i++)
        {
        cout << detail::generate_u32(rng) << endl;
        }
    return 0;
    }

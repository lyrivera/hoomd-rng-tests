#include <iomanip>
#include <string>
#include <sstream>
#include <iostream>

std::string int_to_hex( int i )
  {
  std::stringstream stream;
  stream << std::setfill ('0') << std::setw(8)
         << std::hex << i;
  return stream.str();
  }

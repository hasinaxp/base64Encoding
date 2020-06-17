#include "sp_base64.h"
#include <string>
#include <iostream>

int main(int argc, char** argv) {
    sp::Base64Encoding e;
    std::string encodedText = e.encode("pokemons  are awsome");
    std::string decodedText = e.decode(encodedText);
    std::cout << encodedText << std::endl << decodedText << std::endl;

    return 0;
}
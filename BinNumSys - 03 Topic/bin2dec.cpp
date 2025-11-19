#include <iostream>

int main()
{

    int bin = 1101;
    int dec = 0;
    int base = 1; // represents 2^0

    while (bin > 0)
    {
        int last = bin % 10;     // extract last bit (0 or 1)
        dec = dec + last * base; // add bit * power of 2
        base = base * 2;         // move to next power of 2
        bin = bin / 10;          // remove last digit
    }

    std::cout << dec;

    return 0;
}
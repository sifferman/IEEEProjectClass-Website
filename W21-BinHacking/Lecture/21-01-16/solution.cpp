
/* main.cpp */


#include <iostream>

/**
 * Takes in an unsigned 32 bit integer "num" and an unsigned 8 bit integer "n".
 * Returns the "nth bit" of "num".
 */
bool get_nth_bit( uint32_t num, uint8_t n );

/**
 * Takes in an unsigned 32 bit integer "num" and an unsigned 8 bit integer "n".
 * Returns "num" with the nth bit set to 1.
 */
uint32_t set_nth_bit( uint32_t num, uint8_t n );

/**
 * Takes in an unsigned 32 bit integer "num" and an unsigned 8 bit integer "n".
 * Returns "num" with the nth bit set to 0.
 */
uint32_t reset_nth_bit( uint32_t num, uint8_t n );

/**
 * Takes in an unsigned 32 bit integer "num" and an unsigned 8 bit integer "n".
 * Returns "num % (n^2)".
 */
uint32_t mod_pow2( uint32_t num, uint8_t n );

int main() {
    if ( get_nth_bit( 0b00001, 0 ) == true )
        std::cout << "get_nth_bit()     test 1 passed\n";
    else
        std::cerr << "get_nth_bit()   * test 1 failed\n";
    if ( get_nth_bit( 0b00001, 4 ) == false )
        std::cout << "get_nth_bit()     test 2 passed\n";
    else
        std::cerr << "get_nth_bit()   * test 2 failed\n";
    if ( get_nth_bit( 0b10000, 4 ) == true )
        std::cout << "get_nth_bit()     test 3 passed\n";
    else
        std::cerr << "get_nth_bit()   * test 3 failed\n";

    std::cout << std::endl;

    if ( set_nth_bit( 0b00000, 0 ) == 0b00001 )
        std::cout << "set_nth_bit()     test 1 passed\n";
    else
        std::cerr << "set_nth_bit()   * test 1 failed\n";
    if ( set_nth_bit( 0b00001, 4 ) == 0b10001 )
        std::cout << "set_nth_bit()     test 2 passed\n";
    else
        std::cerr << "set_nth_bit()   * test 2 failed\n";

    std::cout << std::endl;

    if ( reset_nth_bit( 0b00001, 0 ) == 0b00000 )
        std::cout << "reset_nth_bit()   test 1 passed\n";
    else
        std::cerr << "reset_nth_bit() * test 1 failed\n";
    if ( reset_nth_bit( 0b10001, 4 ) == 0b00001 )
        std::cout << "reset_nth_bit()   test 2 passed\n";
    else
        std::cerr << "reset_nth_bit() * test 2 failed\n";

    std::cout << std::endl;

    if ( mod_pow2( 9, 3 ) == 1 )
        std::cout << "mod_pow2()        test 1 passed\n";
    else
        std::cerr << "mod_pow2()      * test 1 failed\n";
    if ( mod_pow2( 2, 0 ) == 0 )
        std::cout << "mod_pow2()        test 2 passed\n";
    else
        std::cerr << "mod_pow2()      * test 2 failed\n";
    if ( mod_pow2( 0x135153, 7 ) == 83 )
        std::cout << "mod_pow2()        test 3 passed\n";
    else
        std::cerr << "mod_pow2()      * test 3 failed\n";
}

bool get_nth_bit( uint32_t num, uint8_t n ) {
    return ( num & ( 1 << n ) ) != 0;
}

uint32_t set_nth_bit( uint32_t num, uint8_t n ) {
    return num | ( 1 << n );
}

uint32_t reset_nth_bit( uint32_t num, uint8_t n ) {
    return num & ~( 1 << n ) ;
}

uint32_t mod_pow2( uint32_t num, uint8_t n ) {
    uint32_t mask = (~0x0);
    mask <<= n;
    return num & (~mask);
}

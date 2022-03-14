#include <fstream>

int main () {

    std::ifstream ifs( "input_file.txt",  std::ios_base::binary );
    std::ofstream ofs( "output_file.txt", std::ios_base::binary );

    // get length of input file:
    ifs.seekg( 0, ifs.end );
    size_t buffer_size = ifs.tellg();
    ifs.seekg( 0, ifs.beg );

    // load input file into buffer
    uint8_t buffer[ buffer_size ];
    ifs.read( (char*)buffer, buffer_size );

    // write buffer into output file
    ofs.write( (char*)buffer, buffer_size );

    ifs.close();
    ofs.close();

    return 0;
}

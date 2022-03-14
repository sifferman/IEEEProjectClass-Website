#include <fstream>
#include <string.h>

int main () {

    std::ifstream ifs("input_file.txt");
    std::ofstream ofs("output_file.txt");

    std::string line;

    while ( ifs.good() ) {
        std::getline( ifs, line );
        ofs << line << '\n';
    }

    ifs.close();
    ofs.close();

    return 0;
}

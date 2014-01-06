#include <map>
#include <fstream>
#include "flurry.h"
#include "Plist.hpp"

using namespace std;

// run with args <infile.plist> <outfile.flurry>
int main(int argc, char* argv[])
{
    map<string, boost::any> data;
    assert(argc > 2);
    ifstream is(argv[1], ios::in|ios::binary);
    Plist::readPlist(is, data);
    ofstream os(argv[2], ios::out|ios::binary|ios::trunc);
    flurry::oarchive write(os);
    write << data;
}

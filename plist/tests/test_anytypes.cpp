#include <map>
#include <vector>
#include <iostream>
#include <boost/any.hpp>
using namespace std;

int main()
{
    static boost::any aString = string();
    static boost::any aDouble = double(0);
    static boost::any aFloat = float(0);
    static boost::any anInt32 = int32_t(0);
    static boost::any anInt64 = int64_t(0);
    static boost::any aLong = long(0);
    static boost::any aShort = short(0);
    static boost::any anUInt32 = uint32_t(0);
    static boost::any anUInt64 = uint64_t(0);
    static boost::any aULong = (unsigned long)(0);
    static boost::any aUShort = (unsigned short)(0);
    static boost::any anArray = vector<boost::any>();
    static boost::any aMap = map<string, boost::any>();
    static boost::any aByteArray = vector<char>();
    static boost::any aPlistBool = bool(true);

    cout << "string type " << aString.type().name() << endl
         << "double type " << aDouble.type().name() << endl
         << "float type " << aFloat.type().name() << endl
         << "int32 type " << anInt32.type().name() << endl
         << "int64 type " << anInt64.type().name() << endl
         << "long type " << aLong.type().name() << endl
         << "short type " << aShort.type().name() << endl
         << "uint32 type " << anUInt32.type().name() << endl
         << "uint64 type " << anUInt64.type().name() << endl
         << "unsigned long type " << aULong.type().name() << endl
         << "unsigned short type " << aUShort.type().name() << endl
         << "array type " << anArray.type().name() << endl
         << "map type " << aMap.type().name() << endl
         << "bytearray type " << aByteArray.type().name() << endl
         << "bool type " << aPlistBool.type().name() << endl;
}

#include <opstruct.hpp>
nasic::opstruct::opstruct()
{
    //ctor
}

nasic::opstruct::~opstruct()
{

}

bool nasic::opstruct::saveOptions(nasic::opstruct& op, const char * filename)
{
    std::ofstream ofs(filename);
    boost::archive::xml_oarchive xml(ofs);
    xml << boost::serialization::make_nvp("Options", op);
    return true;
}

bool nasic::opstruct::loadOptions(nasic::opstruct& op, const char * filename)
{
    std::ifstream ifs(filename);
    boost::archive::xml_iarchive xml(ifs);
    xml >> boost::serialization::make_nvp("Options", op);
    return true;
}

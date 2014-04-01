#include <iostream>
#include <opstruct.hpp>

int main()
{
    nasic::opstruct op;
    int vol, eff, diff;

    if(!op.loadOptions(op,"options.xml"))
    {
        std::cerr<<"Could not load options."<<std::endl;
        vol = 2;
        eff = 4;
        diff = 1;
    }

    vol = op.m_volume;
    eff = op.m_effects;
    diff = op.m_difficulty;

    std::cout<<"Music volume: "<<vol<<"\n"<<"Effects volume: "<<eff<<"\n"<<"Difficulty: "<<diff<<std::endl;

    std::cout<<"Enter music volume: "<<std::endl;
    std::cin>>vol;

    std::cout<<"Enter sound effects volume: "<<std::endl;
    std::cin>>eff;

    std::cout<<"Enter difficulty level: "<<std::endl;
    std::cin>>diff;

    std::cout<<"Music volume: "<<vol<<"\n"<<"Effects volume: "<<eff<<"\n"<<"Difficulty: "<<diff<<std::endl;

    op.m_volume = vol;
    op.m_effects = eff;
    op.m_difficulty = diff;

    if(!op.saveOptions(op,"options.xml"))
    {
        std::cerr<<"Could not save options."<<std::endl;
    }

    return 0;
}

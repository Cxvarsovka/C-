#include<string>
#include<iostream>
int main()
{
    std::string nini = "Love";
    std::string luka = "Love";
    if(luka.compare(nini) == 0) { std::cout<<"Love"<<std::endl; }
    else { std::cout<<"They Are not gf bf anymore"<<std::endl; }
}

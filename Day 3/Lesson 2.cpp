#include<string>
#include <iostream>
int main()
{
    std::string line;
    std::cout<<"Whats Your Name ? :";
    getline(std::cin, line);
    if(line.find("luka") == -1){
        line.erase();
        std::cout<<"You are not lider"<<std::endl;
        line.append("LOL");
        std::cout<<line;
    }
    else{
        std::cout<<"Welcome back luka"<<std::endl;
    }
}

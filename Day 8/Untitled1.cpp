#include<array>
#include<iostream>
#include<vector>
#include<cmath>
#include<fstream>
// getline da get imecadine mere
int main(){
    std::cout<<"Please enter The File Name : ";
    std::string filename;
    std::cin>>filename;
    std::ofstream file;
    file.open(filename.c_str()); //std::ios::app anu daamatebs da ro chartav rac iyo is iqneba
    
    std::vector<std::string> names;
    names.push_back("Luka");
    names.push_back("Nini");
    names.push_back("Lusiana");
    names.push_back("Liza");
    
    for(auto i : names){
        file<<i<<std::endl;
    }
    file.close();
    
    std::ifstream nini;
    nini.open(filename.c_str());
    std::vector<std::string> wakitxva;
    std::string ok;
    while(nini>>ok){
        wakitxva.push_back(ok);
    }
    for(auto i : wakitxva){
        std::cout<<i<<" ";
    }
}


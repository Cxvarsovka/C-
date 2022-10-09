#include<iostream>
int main(){
    std::string pass = "Luka Aris Magari zagari";
    std::cout<<"( ";
    for(int i = 0; i < pass.length(); i++){
        std::cout<<pass[i]<<" ";
        if(pass[i] == 'z'){
            std::cout<<") Found z !";
            break;
        }
    }
}

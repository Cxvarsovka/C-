#include<iostream>
int main(){
    std::string pass = "luka123";
    std::string guess;
    do{
        std::cout<<"Guess The Password : ";
        std::cin>>guess;
    }while(pass != guess);
    std::cout<<"Good Job !";
}

#include<iostream>
int main(){
    int i = 5;
    int factorial = 1;
    while(i > 1){
        factorial = factorial * i;
        std::cout<<factorial<<" ";
        i--;
    }
    
}

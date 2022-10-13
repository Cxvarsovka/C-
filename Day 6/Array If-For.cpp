#include<iostream>
void print_arry(int num[] , int count){
    for(int i = 0; i < count; i++){
        std::cout<<num[i]<<"    ";
    }
}
int main(){
    const int size = 20;
    int arry[size];
    int count = 0;
    for(int i = 0; i < size; i++){
        if(std::cin>>arry[i]){
            count++;
        }
        else{
            break;
        }
    }
    print_arry(arry , count);
    std::cin.clear();
    std::cin.ignore(10000 , '\n'); //nagavs inputshi ashorebs
    
    std::string luka;
    std::cin>>luka;
    std::cout<<luka;
}

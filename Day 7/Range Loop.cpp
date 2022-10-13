#include<array>
#include<vector>
#include<iostream>
void print(std::vector<int> vec){
    for(auto i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl ;
}
int main()
{
    std::vector<int> number = {1,2,3,4};
    std::vector<int> number1 = number;
    print(number);
    print(number1);
    
    return 0;
}

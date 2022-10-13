#include<iostream>
#include<vector>
#include<array>
#include<cstdlib>
#include<ctime>
void print_array(std::array<int , 251> guesses , int size){
    for(int i = 0; i < size; i++){
        std::cout<<guesses[i]<<std::endl;
    }
}
int main(){
    srand(time(NULL));
    int random = rand() % 251;
    int count = 0;
    std::array<int, 251> nums;
    for(int i = 10; i >= 0; i--){
        nums[count++] = i;
    }
    print_array(nums,count);
}

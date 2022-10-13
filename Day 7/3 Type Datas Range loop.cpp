#include<iostream>
#include<vector>
#include<array>
void print_arry(std::array<int, 6> array){
    for(auto i : array){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}
void print_vector(std::vector<int> vec){
    for(auto i : vec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    std::vector<int> nums1 = {1,2,3,4,5,6};
    std::array<int, 6> nums2 = {1,2,3,4,5,6};
    int nums3[] = {1,2,3,4,5,6};
    
    print_vector(nums1);
    print_arry(nums2);
    
    for(auto i : nums3){
        std::cout<<i<<" ";
    }
}

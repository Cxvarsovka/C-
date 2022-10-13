#include<iostream>
#include<vector>
const auto size = 10;
void print_vec(std::vector<int> vec){
    for(auto i : vec){
        std::cout<< i << " ";
    }
}
void filter_vec(std::vector<int> &vec){
    int index;
    for(auto i = vec.begin() ; i != vec.end(); i++){
        if(*i % 2 != 0){
            vec.erase(i);
        }
    }
    index++;
    print_vec(vec);
}
void fill_vec(std::vector<int> &vec){
    int numbers = 0;
    for(int i = 0; i < size; i++){
        std::cin>>numbers;
        vec.push_back(numbers);
    }
    filter_vec(vec);
}
int main()
{
    std::vector<int> vec;
    fill_vec(vec);
}


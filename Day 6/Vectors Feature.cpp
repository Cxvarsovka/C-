#include<iostream>
#include<vector>
void print_vector(std::vector<int> vec){
	for(int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout<<std::endl;
}
int main()
{
	std::vector<int> nums = {1,2,3};
	nums.push_back(4);
	print_vector(nums);
}

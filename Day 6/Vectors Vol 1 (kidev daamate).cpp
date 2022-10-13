#include<iostream>
#include<vector>
void print_vector(std::vector<int> vec){
	for(int i : vec) // anu es i vectoris yvela elementi iqneba ra da yovel jerze daibechdea
	{
		std::cout << i << " ";
	}
	std::cout<<std::endl;
}
int main()
{
	std::vector<int> nums = {1,2,3};
	nums.push_back(4); // Amatebs Bolos Elements
	print_vector(nums); 
	nums.pop_back(); // Aklebs Bolodan Elements
	print_vector(nums);
	std::cout<< nums.capacity() << std::endl; // ramden elementsac daitevs
	std::cout<< nums.size() << std::endl; // vectoris zoma
	nums.resize(8); // anu vectoris zomas cvlis
	std::cout<< nums.size() << std::endl;
	if(!nums.empty())
	{
	    std::cout<< "True" << std::endl;
	}else{
	    std::cout<< "False" <<std::endl;
	}
}

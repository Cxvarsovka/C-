#include<iostream>
int main(){
	int numbers[] = {10, 11,12,13,14};
	
	int size = sizeof(numbers) / sizeof(int); // Or You Can Numbers[0]
	
	std::cout<<size<<std::endl;
	
	for(int i = 0; i < size; i++){
		std::cout<<numbers[i]<<" ";
	}
}

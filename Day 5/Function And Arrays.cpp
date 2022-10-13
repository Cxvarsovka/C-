#include<iostream>
#include<algorithm>
void print_array(int array[] , int size){
	for(int i = 0; i < size; i++){
		std::cout<<array[i]<<" ";
	}
} 
int main(){
	int numbers[] = {10,21,63,72,19};
	int size = sizeof(numbers) / sizeof(int);
	print_array(numbers , size);
	return 0;
}

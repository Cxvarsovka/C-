#include<iostream>
int main(){
    int i = 0;
    int answer = 1;
    for(int i = 1; i < 5; i++){
    	answer = answer * i;
    	std::cout<<answer<<" ";
	}
	std::cout<<std::endl;
	// decrement
	
	for(int i = 10; i > 0; i--){
		std::cout<<i<<" ";
	}
}

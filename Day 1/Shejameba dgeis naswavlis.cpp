#include<iostream>
#include<cmath>
#include<string>
int main(){
	char choose;
	bool pizza;
	std::cout<<"Do You Love Pizza ? [Y/N]";
	std::cin>>choose;
	if(choose == 'y' || choose == 'Y'){
		pizza = true;
	}
}

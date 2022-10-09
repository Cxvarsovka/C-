#include<iostream>
int main(){
	int answer = 5;
	std::cout<<"Guess The Number : ";
	int guess;
	std::cin>>guess;
	int points = guess == answer ? 10 : 0;
	std::cout<<points<<std::endl;
	
	std::string answer1 = "luka";
	std::cout<<"Guess The Name : ";
	std::string guess1;
	std::cin>>guess1;
	guess1 == answer1 ? std::cout<<"Good Job" : std::cout<<"False";
}

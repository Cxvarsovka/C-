#include<iostream>
int main()
{
	int guesses[] = {10,20,30,40,50};
	std::cout<<guesses[2]<<std::endl;
	guesses[2] = 36;
	std::cout<<guesses[2]<<std::endl;
	
	int nini[5];
	nini[0] = 11;
	std::cout<<nini[0]<<std::endl;
	std::cin>>nini[0];
	std::cout<<nini[0]<<std::endl;
	
	return 0;
}

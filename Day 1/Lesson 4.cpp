#include<iostream>
#include<string>
int main(){
	std::string meet = "";
	// std::cin>>meet;  tu space davachert daiwereba mxolod spaceamde dawerili simboloebi
	
	getline(std::cin, meet); // es spacesac chatvlis simbolod da spaceis mere rac modis imasac dabechdavs
	std::cout<<meet<<std::endl;

		
	std::string greeting = "Hello";
	std::string complete_greeting = greeting + " There";
	complete_greeting.append("!");
	std::cout<<greeting + " There!"<<std::endl; // Combine
	std::cout<<complete_greeting<<" "<<complete_greeting.length()<<std::endl;
	
	std::string one = "luka";
	one.insert(2 , "           "); // amatebs ragac simbolos ra adgilasac ginda
	std::cout<<one<<std::endl;
	
	std::string nini = "nini1123";
	nini.erase(5); // shlis 5 indexis chatvlit da mere yvelas
	std::cout<<nini<<std::endl;
	
	std::string luka = "nini";
	luka.erase(luka.length() - 1); // bolo indexze mdgomi simbolos washla
	std::cout<<luka<<std::endl;
	
	
}

#include<iostream>
int main(){
	int choice;
	do{
		std::cout<<"[1] Play Game"<<std::endl<<"[2] Exit \n";
		std::cin>>choice;
		
		switch(choice){
			case 1:
				std::cout<<"Nicee"<<std::endl;
			break;
			case 2:
				std::cout<<"OK Bye"<<std::endl;
			break;
			default:
				std::cout<<"Please Enter Corectly !"<<std::endl;
			break;
		}
	}while(choice != 2);
}

#include<iostream>
int main(){
    std::string pass = "Loka Arios Magaoi zagari";
    for(int i = 0; i < pass.length(); i++){
    	if(pass[i] == 'o'){
    		continue;
		}
        std::cout<<pass[i]<<" ";
    }
}

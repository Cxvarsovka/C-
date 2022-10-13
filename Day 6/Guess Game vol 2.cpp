#include<iostream>
#include<ctime>
#include<cstdlib>
void print_arry(int guesses[] , int size){
    std::cout<<"You have entered this numbers : ";
    for(int i = 0; i < size; i++){
        std::cout<<guesses[i]<<"  ";
    }
    std::cout<<std::endl;
    std::cout<<"Lats One is Correct Guess";
    std::cout<<std::endl;
}
void play_game(){
    int guesses[251];
    int count_guesses = 0;
    int random = rand() % 251;
    int guess;
    std::cout<<random<<std::endl;
    while(true){
        std::cout<<"Guess The Number : "<<std::endl;
        std::cin>>guess;
        guesses[count_guesses++] = guess;
        if(guess < random){
            std::cout<<"It is low"<<std::endl;
        }
        else if(guess == random){
            std::cout<<"You Win !"<<std::endl;
            break;
        }
        else{
            std::cout<<"It is high"<<std::endl;
        }
    }
    print_arry(guesses , count_guesses);
}
int main()
{
    srand(time(NULL));
    int choice;
    
    do{
        std::cout<<"[1] Play Game"<<std::endl<<"[2] Exit Game"<<std::endl;
        std::cin>>choice;
        
        switch(choice){
            case 1:
                play_game();
            break;
            case 2:
                std::cout<<"Thanks For Playing !"<<std::endl;
            break;
            default: 
                std::cout<<"Invalid operator !"<<std::endl;
            break;
        }
    }while(choice!=2);
    
}

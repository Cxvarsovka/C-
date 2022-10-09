using std::cout;
int main(){
    bool i_love_pizza = false;
    cout<<std::boolalpha<<i_love_pizza<<std::endl;
    
    double a = 10.0 / 3;
    a = a * 1000000000000;
    double b;
    long double c;
    
    cout<<a<<std::endl;
    cout<<std::fixed<<a;
}

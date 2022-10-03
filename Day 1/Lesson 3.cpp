#include<iostream>
#include<cmath>
using std::cout;
int main(){
	cout<<sqrt(-25)<<std::endl; // nan
	cout<<pow(9,999)<<std::endl; // infinite
	cout<<pow(-9,999)<<std::endl; // negative infinite
	
	// cout<<10 % 3.25<<std::endl; this is eror
	cout<<remainder(10 , 3.25)<<std::endl; // nashti 0.25
	cout<<fmax(10,4)<<std::endl; // 10
	cout<<fmin(10,4)<<std::endl; // 4
	cout<<ceil(1.02)<<std::endl; // 2
	cout<<floor(1.02)<<std::endl; // 1
	cout<<trunc(-1.5)<<std::endl; // es trunc ubralod achris mcocavwertils
	cout<<round(1.49)<<std::endl // amrgvalebs 2
	
}

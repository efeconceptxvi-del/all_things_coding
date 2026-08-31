#include <iostream>
#include<string>
//thia was usedto learn char learncpp.com chapter 4.11
int main(){

char answer{};
std::cout<<" would you like a \"burrito\" (y/n)?\n" ;
std::cin>>answer;
if(answer=='y'){
    std::cout<<" Yay, burrito time!.\n";
}else if(answer=='n'){
    std::cout<<" No burrito for you.\n";
}else{std::cout<<"Invalid Input";}
return 0;

}
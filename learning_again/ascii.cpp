#include <iostream>
#include<string>
//use static_cast to change type.
int main(){
    char in{};
std::cout<<" enter a character?\n";
std::cin>>in;
std::cout<<"I use static_cast to change char "<<in<<" to "<<static_cast<int>(in)<<'\n';
return 0;



}
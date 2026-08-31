#include<iostream>
#include<string>
int main(){

int n{};
std::cout<<" please input a number from one to nine.\n";
std::cin>>n;
if (n>9||n<0){
    std::cout<<" the input is invalid. please input a number between 0 to 9.";
    return 0;
    }
     if ( n==2||n==3||n==5||n==7){
        std::cout<<" this is a prime number.\n";
    }else {
        std::cout<<" this is a regular number.\n";
    }
return 0;
}
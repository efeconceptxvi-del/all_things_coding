#include<iostream>
#include<string>
//learn.cpp 4.x quiz.
int main(){
    double num1{};
    double num2{};
    char opr{};
    double answer{};
    std::cout<<"please enter the first number.\n";
    std::cin>>num1;
    std::cout<<" please enter the operation.\n";
    std::cin>>opr;
    std::cout<<"please enter the second number.\n";
    std::cin>>num2;

if(opr=='+'){
    answer=num1+num2;
}else if(opr=='-'){
    answer=num1-num2;
}else if(opr=='*'){
    answer=num1*num2;
}else if(opr=='/'){
    answer=num1/num2;
}else{ std::cout<<"this operation is invalid.\n"; }

std::cout<<" the answer is "<<answer<<" .\n";
return 0;
}
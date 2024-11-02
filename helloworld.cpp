#include <iostream>
#include<utility>
#include<vector>
#include"something.h"

/*void func ()
{std:: cout<< "hello world"<< std::endl;
std:: cout<< "goodbye\n";
int age=61;
int year {1963};
std::cout<<age<<std:: endl;}*/



int main(){
    
std::vector<std::pair<std::string,int>> statsVector{10};
statsVector[0].second=100;
statsVector[1].first="bob";
std::cout<<statsVector.size()<<" elements before push back"<<'\n';
statsVector.push_back({"pit",NULL});// adds tenth element
std::cout<<statsVector.size()<<" elements after push back"<<'\n';
    testFunction();
  std::cout<<"enter name ";getline(std::cin,statsVector[0].first);
std::cout<<statsVector[10].first<<". "<<statsVector[10].second<<std::endl;
std::cout<< statsVector[0].first<<"....."<<statsVector[0].second<<" RUNS\n\n\n";
dunc();
return 0;}
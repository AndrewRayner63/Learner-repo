
#include <iostream>
#include <vector>
#include"something.h"

int dunc ()
{
    std::cout<<"----------Function dunc()from new file.cpp begins----------\n";
 std::vector <std::string> players;
 std::string string;
int batcount{0};
while(batcount<5){
if (batcount==0)
{  
    std::cout<<"opening batsman name ";
   getline( std::cin, string);
    players.push_back (string);
    
    std::cout<<"next batsman name ";
    std::cin>> string;
    players.push_back (string);
    batcount=2;
}else{
    std::cout<<"New batsman name ";
    std::cin>> string;
    players.push_back (string);
    batcount++;
}}
std::cout<<players[players.size()-1] << std::endl;
std::cout<<players[0] <<"  is the opening batsmen" << std::endl;
std::cout<<players.size()<<" elements in vector"<<'\n';
std::cout<<"--------------------------END OF dunc----------------------\n\n\n";

    return 0;
}
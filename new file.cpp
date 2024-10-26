
#include <iostream>
#include <vector>

int main ()
{
    std::cout<<"hello world!\n";
 std::vector <std::string> players;
 std::string string;
int batcount{0};
while(batcount<5){
if (batcount==0)
{  
    std::cout<<"opening batsman name ";
    std::cin>> string;
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
std::cout<<players.size();

    return 0;
}
#include <iostream>
using
  std::string;

 
class lenders 
 
{

public:
char
    companyname[50];
  
int
    amount;
  
float
    interest;
  
int
    contact;

} s[15];


 
class borrower 
{
 public: 
char
    name[50];
  
int
    amount;
  
float
    interest;

} b;


 
int
main () 
{
  
std::cout << "Enter information of lenders: " << std::endl;
  
 
for (int i = 0; i < 15; ++i)
    
    {
      
 
std::cin >> s[i].companyname;
      
 
std::cin >> s[i].amount;
      
 
std::cin >> s[i].interest;
      
 
std::cin >> s[i].contact;
      
 
std::cout << std::endl;
    
} 
std::cin >> b.name;
  
 
std::cin >> b.amount;
  
 
std::cin >> b.interest;
  
 
std::cout << std::endl;
  
 
for (int i = 0; i < 15; ++i)
    {
      
if (b.amount < s[i].amount && b.interest >= s[i].interest)
	{
	  
std::cout << "eligible company name for borrower " << s[i].
	    companyname << std::endl;
	  
std::cout << "amount " << s[i].amount << std::endl;
	  
std::cout << "interest " << s[i].interest << std::endl;
	  
std::cout << "contact number " << s[i].contact << std::endl;
	
}
    
}
  
return 0;

}
//loaning service program is completely centralised as there is no set of rules to be followed like in decentralised system certain rules are followed through smart contracts or any other set of rules regulated by all set of nodes(users of interface)and in loanoing system all the set of rules and offering of interest is in the hand of the lender he can manipulate the data and without any security it could  be done also so the system is centralised.// 
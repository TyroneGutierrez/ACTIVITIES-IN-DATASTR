// GUTIERREZ TYRONE JAMES J. 
// ACTIVITY 4
#include <iostream>
using namespace std;

int main()
{
    cout<< "          GOOD DAY! THESE ARE EXAMPLES OF LOOPS IN C++ PROGRAMMING!\n";
    cout<< "FIRST IS FOR LOOP\n";
    
    for(int a = 0; a < 5; a++)
    {
        cout<< " ANG POGI KO!\n";
    }
    
    
    cout<< "\nSECOND ONE IS THE WHILE LOOP\n";
    string fruit;
    
  cout<<"\nWHAT IS MY FAVORITE FRUIT? ";
  cin>> fruit;
  
  while(fruit != "grapes")
  {
      cout<<"\nSORRY! TRY AGAIN: ";
      cin>>fruit;
  }
    cout<<"\nCONGRATULATIONS! YOUR ANSWER IS RIGHT.\n";
    
   cout<<"\nLASTLY, DO WHILE LOOP\n";
   
   string answer;
   
   do
   {
       cout<<"\nAM I HANDSOME? ";
       cin>> answer;
       
       if( answer != "yes"){
       cout<<"HAYSSSS! I'M GONNA ASK YOU AGAIN.\n";
       }
   }
   
   while (answer != "yes");
   cout<< "\nYOU GOT IT. THANKS!\n";
   cout<<"\n THANK YOU!";
   
   return 0;
   
   
   
 
}
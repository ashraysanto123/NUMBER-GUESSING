
#include <iostream>
using namespace std;
int main()
{
    int attemp = 1,ans,guess=0,_won=0,h=100,l=0;
    srand(time(0));
    ans = rand() % 100;
    cout<<"**** PLEASE READ INSTRUCTION ****"<<endl<<endl;
    cout << "PC will generate any random number between 0-100"<<endl;
    cout<<"You have to guess the number."<<endl<<"You have 6 attempts/chances to guess."<<endl<<endl;
    cout<<"After each wrong guess PC will tell you,Your guess is HIGH or LOW."<<endl;
    cout << "Do not Enter any othe character other than Numbers."<<endl;
    cout<<"       *BEST OF LUCK*"<<endl;
while(attemp <= 6)
{
cout<<endl<<"Attempts no. :- "<<attemp<<endl;
cout<<"Guess a number between 0 - 100 "<<endl;
cin>>guess;
if(guess < 0 || guess > 100){
  cout<<"!!INVALID GUESS!!"<<endl;
  continue;
}
else if(guess == ans){
   cout<<"CONGRATULATIONS YOU WON!! your guess "<<guess<<" is correct"<<endl;
   _won = 1;
   break;
   }
else if(guess < ans){
  cout<<"*** Your guess "<<guess<<" * LOW * "<<endl;
  l = guess;
}
else{
  cout<<"*** Your guess "<<guess<<"  * HIGH * "<<endl;
  h = guess;
}
cout<<"*Number is between "<<l<<" ---to---> "<<h<<endl;
attemp++;
}//loop end
cout<<"\n";
if(_won){
  cout<<"THANKS FOR PLAYING!! PLESE GIVE A STAR"<<endl;
}
else{
  cout<<"Sorry you lost! correct answer is: "<<ans<<endl<<"Please play again"<<endl;
}
cout<<"\n\n";
}

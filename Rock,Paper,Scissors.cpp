#include <iostream>
#include <string>
using namespace std;

int main(){
double userRating,oppRating;
string userMove,oppMove;
// ask user for rating
    cout << "What is your rating? ";
    cin >> userRating;
    cout << "What is your opponent's rating? ";
    cin >> oppRating;
    cout << "\nWhat is your move? ";
    cin >> userMove;
    cout << "What is your opponent's move? ";
    cin >> oppMove;
      // Outcomes if user is better than opponent 
    if(userRating>oppRating && (userMove == "rock" && oppMove== "rock"||userMove=="paper" && oppMove=="paper"||userMove == "scissors" && oppMove == "scissors")){
      cout << "\nYour new rating is " << userRating-1 << endl;return 0;

    }else if(userRating>oppRating&& (userMove == "rock" && oppMove == "scissors" ||userMove=="paper" && oppMove=="rock"||userMove=="scissors" && oppMove=="paper")){
      cout << "\nYour new rating is " << userRating+2 << endl;return 0;
    }else if(userRating>oppRating && (userMove == "paper" && oppMove == "scissors"|| userMove== "rock" && oppMove=="paper" || userMove =="scissors" && oppMove=="rock")){
      cout << "\nYour new rating is " << userRating-3 << endl;return 0;
    }
      // Outcomes if user is worse than opponent 
    if(userRating<oppRating && (userMove == "rock" && oppMove== "rock")||(userMove=="paper" && oppMove=="paper")||(userMove == "scissors" && oppMove == "scissors")){
      cout << "\nYour new rating is " << userRating+1 << endl;return 0;
    }else if(userRating<oppRating && (userMove == "rock" && oppMove == "scissors")||(userMove=="paper" && oppMove=="rock")||(userMove=="scissors" && oppMove=="paper")){
      cout << "\nYour new rating is " << userRating+3 << endl;return 0;
    }else if(userRating<oppRating && (userMove == "paper" && oppMove == "scissors")|| (userMove== "rock" && oppMove=="paper") || (userMove =="scissors" && oppMove=="rock")){
      cout << "\nYour new rating is " << userRating-2 << endl;return 0;
    }
    
} 

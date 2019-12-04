

//Huawei Zhang
//CSC114-450
//Distance Traveled
#include <iostream>
using namespace std;


int main()
{
 double speed;
 double hours;
 int i = 1;
 cout << "What is the speed of vehicle in mph?\n";
 cin >> speed;
 cout << "How many hours has it traveled?\n";
 cin >> hours;
 if (speed >=0 && hours > 0  ){
     cout << "Hour    Distance Traveled\n";
     while(i <= hours) {
         cout << i <<"           "<<speed*i<<endl;
         i++;
     }
 }
    else {
        cout << "Invalid Input\n";
    } 
 

}


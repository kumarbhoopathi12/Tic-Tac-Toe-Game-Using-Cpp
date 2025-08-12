#include<iostream>
using namespace std;
 char space[3][3] = {{'1', '2', '3'},{'4', '5', '6'},{'7', '8', '9'}};
int row, col;
char token = 'X';
bool tye = false;
string n1= "", n2 = "";cd

void function1()
{
   


    cout<<"   |      |\n";
    cout<<" "<<space[0][0]<<" | ""  "<<space[0][1]<< " "" | " <<space[0][2]<<"\n";   
    cout<<"___|______|___\n";
    cout<<"   |      |\n";
    cout<< " "<<space[1][0]<<" | ""  "<<space[1][1]<<" "" | "<<space[1][2]<<"\n";
    cout<<"___|______|___\n";
    cout<<"   |      |\n";
    cout<<" "<<space[2][0]<< " | ""  "<<space[2][1]<<" "" | "<<space[2][2]<< "\n ";
    cout<<"  |      |\n";              
}
bool function2(){
    int digit;
    if(token == 'X') {
        cout<<n1<<" plese nter";
        cin>>digit;

}
if(token == '0') {
        cout<<n2<<" plese nter";
        cin>>digit;
}
if(digit == 1) {
row = 0; col = 0;
} else if(digit == 2) {
row = 0; col = 1;
} else if(digit == 3) {
row = 0; col = 2;
} else if(digit == 4) {
row = 1; col = 0;
} else if(digit == 5) {
row = 1; col = 1;
} else if(digit == 6) {
row = 1; col = 2;
} else if(digit == 7) {
row = 2; col = 0;
} else if(digit == 8) {
row = 2; col = 1;
} else if(digit == 9) {
row = 2; col = 2;
} 
else if (digit < 1 || digit > 9) {
cout<<"Invalid input, please try again."<<endl;
}
if(token == 'X'&& space[row][col] != 'X' && space[row][col] != '0')
{
    space[row][col] = 'X';
    token='0';
}
else if(token == '0' && space[row][col] != 'X' && space[row][col] != '0')
{
    space[row][col] = '0';
    token='X';
}
else {
    cout<<"Sorry, the place is already occupied"<<endl;
    function2();
}
return false;
}

bool function3()
{

    for(int i = 0; i < 3; i++)
     {
   if(space[i][0] == space[i][1] && space[i][0] == space[i][2] || 
      space[0][i] == space[1][i] && space[0][i] == space[2][i]) 
       return true;
   }
if(space[0][0] == space[1][1] && space[0][0] == space[2][2] || 
   space[0][2] == space[1][1] && space[0][2] == space[2][0])
   {
   return true;
   }
   for(int i = 0; i < 3; i++)
   {
       for(int j = 0; j < 3; j++)
       {
           if(space[i][j] != 'X' && space[i][j] != '0')
           return false;
       }
   }

    tye = true;
     return false;
}

int main() {
     cout << "Enter name of player 1: ";
    cin >> n1;
    cout << "Enter name of player 2: ";
    cin >> n2;
    cout << "Welcome " << n1 << " and " << n2 << " to the game!" << endl;
    cout <<n1<< " ""Will play First and " <<n2<< " ""Will play second"<<endl;
    
    while(!function2())
    {
        function1();
        function2();
        function2();
    }
if(token == 'X' && tye == false) 
{
    cout<<n1<<" wins!"<<endl;
}
else if(token == '0' && tye == false) 
{
    cout<<n2<<" wins!"<<endl;
}
else 
{
    cout<<"It's a tie!"<<endl;
}
}
#include <cstdlib>
#include <iostream>
#include<cstring>
using namespace std;

class Coin {
public:
string sideup;

Coin()
{
int randomNum = 1 + rand() % 2;
if(randomNum==1)
{
sideup="head";

}
else
sideup="tail";
}

void Toss()
{
int randomNum = 1 + rand() % 2;
if(randomNum==1)
{
sideup="head";

}
else
sideup="tail";

}

string getsideup()
{
return sideup;
}
};

int main()
{
srand((int)time(0));

Coin quarter;
Coin dime;
Coin nickle;
double balance=0;

for(int i=0;i<20;i++)
{

quarter.Toss();
dime.Toss();
nickle.Toss();
cout<<"The quarter is facing "<<quarter.getsideup()<<endl;

if(quarter.getsideup()=="head")
{


balance=balance+0.25;
cout << "add 25 cents"<<endl;
}
cout<<"The dime is facing "<<dime.getsideup()<<endl;

if(dime.getsideup()=="head")
{


balance=balance+0.1;
cout << "add 10 cents"<<endl;
}
cout<<"The nickel is facing " <<nickle.getsideup()<<endl;

if(nickle.getsideup()=="head")
{
balance=balance+0.05;
cout << " add 5 cents "<<endl;
}

if(balance>=1)
break;

}

if(balance==1)
{
cout<< balance << endl <<" You Won the Toss!!!!! "<<endl;
}
else

cout<< balance << endl << " You Lose...Sorry!!!! "<<endl;


return 0;


}
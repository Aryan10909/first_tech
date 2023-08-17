#include <iostream>
 using namespace std;

 int main () {

 char selection;
do {
    double first;
    double second;
     double sum;
     double p;
cout <<"This is My Calculator!\n";
cout <<"The Menu bar"<< endl;
cout <<"A for addition "<< endl;
cout <<"S for subtraction"<< endl;
cout << "M for multiplication"<<endl;
cout <<"D for division "<<endl;
cout <<"E for exponentiation"<<endl;
cout <<"T for trigonometric operations"<<endl;
cout <<"Q for quit"<<endl;
    cin >> selection; 
  if (selection=='a' or selection=='A'){

  cout <<"Enter two numbers: "<<endl;
  cin>>first>>second;
  cout <<"The sum is: "<<first+second<<endl;
  }
  else if (selection=='s' || selection=='S'){

cout <<"Enter two numbers: "<<endl;
  cin>>first>>second;
  cout <<"The difference is: "<<first-second<<endl;
  
  }
  else if (selection=='m' or selection=='M')
  {
   cout <<"Enter two numbers: "<<endl;
  cin>>first>>second;
  cout <<"The product is: "<<first*second<<endl;
  }
  else if (selection=='d' or selection=='D')
  {
  cout <<"Enter two numbers: "<<endl;
  cin>>first>>second;
  cout <<"The quotient is: "<<first/second<<endl;
  }
  else if (selection=='e' or selection=='E')
  {
   cout << "By what power would you loike to raise e to :"<<endl;
   cin >> p;
   double s;
   s=(1 + p/1 +( p*p)/(1*2) +(p*p*p)/(1*2*3) + (p*p*p*p)/(1*2*3*4)+ (p*p*p*p*p)/( 1*2*3*4*5)+(p*p*p*p*p*p)/(720)+(p*p*p*p*p*p*p)/(720*7));
   cout <<"The required value is :"<<s<<endl;
  }
  else if (selection=='t' or selection=='T'){
    char trig;
    cout <<"s for sine \n";
    cout << "c for cosine \n";
    cout <<"t for tangent\n";
cout <<"What would you like to do: "<<endl;
cin >>trig;
if (trig=='s' or trig =='S'){
  cout <<"Whose sine would you like to calculate:"<<endl;
  cin>>p;
  cout <<"The required sine is:"<<( p-(p*p*p)/6 +(p*p*p*p*p)/120- (p*p*p*p*p*p*p)/(120*42))<<endl;
}
else if (trig =='c' or trig =='C')
{
   cout <<"Whose cosine would you like to calculate:"<<endl;
  cin>>p;
  cout <<"The required cosine is:"<<( 1-(p*p)/2 +(p*p*p*p)/24- (p*p*p*p*p*p)/(720))<<endl;
}
else if (trig=='t' or trig=='T')
{
  cout <<"Whose tangent would you like to calculate:"<<endl;
  cin>>p; 
  cout <<"The required cosine is:"<<( p+(p*p*p)/(3)+(2*(p*p*p*p*p))/15) <<endl;
}
  }
  } while (selection!='q' && selection!='Q');
  return 0;
}
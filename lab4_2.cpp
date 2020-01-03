#include<iostream>
#include<cmath>

using namespace std;

//Write function findDistance() here
double findDistance(double u,double a,double t)
{
  double s;
  s=(u*t)+0.5*(a*pow(t,2));
  
return s;
}

int main(){

  //Calling findDistance() using test cases
 cout<<"s= "<<findDistance(0,0.5,1);
 cout<<"s= "<< findDistance(1.5,-1,2);
   cout<<"s= "<<findDistance(5,4,3);
  return 0;
}

#include <iostream>

using namespace std;

int main()
{
 double xf,yf,xe,ye,deltaX,deltaY,dInit,deltaD,dNew;

  cout<<"Enter the first point"<<endl;
  cin>>xf>>yf;
   cout<<"Enter the end point"<<endl;
  cin>>xe>>ye;

  deltaX=xe-xf;
    deltaY=ye-yf;
    dInit=2*deltaY-deltaX;

deltaD=2*(deltaY-deltaX);
int i=1;
cout<<"("<<"x"<<0<<" , "<<"y"<<0<<")"<<" = "<<"("<<xf<<" ,"<<yf<<")"<<endl;


while(xf<xe){

if(dInit<0){
    xf++;
    dNew=dInit+2*deltaY;
    dInit=dNew;
}else{
xf++;
yf++;
dNew=dInit+deltaD;
 dInit=dNew;
}
        cout<<"("<<"x"<<i<<" , "<<"y"<<i<<")"<<" = "<<"("<<xf<<" ,"<<yf<<")"<<endl;
i++;
}


    return 0;
}

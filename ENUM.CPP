#include<iostream.h>

enum day{mon=100,tue,wed=200,fri,sat,sun};
//same as you can write below
/* const int mon=0;
const int tue=1;
const int wed=2;
const int fri=3;
const int sat=4;
const int sun=5;
		     */
int main()
{
      day d;        //it is written for store const value in value of enum
      d=mon;
     // d=tuees;   error because we any only use enum defined macro/variable
		 //only you can see that tuees not defined in enum so it show error
    //  mon++;       error
      if(d==mon)
      {
       cout<<d;

      }
      else
      {
       cout<<"pankaj";
      }


 return 0;
}
#include <iostream>
#include "SumOfMultiple.h"
#include "SequenceAnalysis.h"
#include <string>

using namespace std;

/*
 * runner.cpp
 *
 * this code performs sum of that are a multiple of 3 or 5 and find uppercase and sort
 *  Created on: Aug, 2018
 *  Author: Agustin Ortega
 *  Email: aortega.jim@gmail.com
 */

int main(){

  //classes 
  SumOfMultiple sum; // sum of multiples of 5 and 6
  SequenceAnalysis sec; // fins uppercases and sort

  //options
  
  char choice = '0';
  int num;
  string str;
  int count = 0;

   // menu


  cout << "---Mini Project ASML--- "<<endl;

  while (choice != '3'){
    cout<<"\n \n";
   	cout << "Please select an options: "<<endl;
    cout << "1: SumOfMultiple "<<endl;
    cout << "2: SequenceAnalysis "<<endl;
    cout << "3: Exit "<<endl;
    cin >> choice;

     switch (choice){
        case '1': 
        		cout << "range to iterate: ";
        		cin >> num;
        		sum.setNum(num);
        		cout<<"result of sum :" << sum.compute()<<endl;
                break;
        case '2': 

        		cin.get();
        		cout << "type the string:";
        		getline (cin,str);
        		//cout <<"string in "<< str <<endl;
        		sec.setStr(str);
        		cout<<"result of string :" << sec.compute()<<endl;
                break;
        case '3': cout << "Exiting ..\n";
                break;
        default:  cout << "this option does not exist!\n"; break;
   }
  }


  
  return 0;
}
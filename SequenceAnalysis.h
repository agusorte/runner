#include <string>
#include <vector>
#include <ctype.h>
#include <algorithm>
using namespace std;

class SequenceAnalysis{

public:
	SequenceAnalysis(){

	}

	SequenceAnalysis(string str):str(str){

	}

	void setStr(string strIn){
	  str = strIn;
	}

	string compute(){

	   vector<char> strUpper;
	   	
	  for (auto c:str ){

	    if(isupper(c)){
		  strUpper.push_back(c);
		}
	  }

	  // sort
     
	  std::sort(strUpper.begin(), strUpper.end());

	  // vector<char> to string

	  std::string strout(strUpper.begin(), strUpper.end());

	  return strout;



	}

private:

	string str;
	


};
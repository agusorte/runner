

class SumOfMultiple{

public:
	SumOfMultiple(){

	}

	SumOfMultiple(int n):num(n){

	}

	void setNum(int n){
		num = n;
	}

	long long int compute(){

	  long long int sum = 0 ;
	  
	  for (size_t i = 0; i < num; i++){

	    if( i%3 == 0 || i%5 == 0 )
		  sum += i;
	  }

	  return sum;

	}


private:
	
	int num;
};


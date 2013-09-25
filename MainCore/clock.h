//Will run a loop, and then print the number of clock ticks and 
//number of seconds used
#include <ctime>
#include <iostream>

int frequency_of_primes (int n) {
	int i,j;
	int update;
	int render;
	int game;
	int freq=n-1;
	for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) 
	{
		--freq; break;
	}
	return freq;
}

class clock 
{
	void Update(void);
}

int main ()
{
	clock_t t;
	int f;
	int update;
	int render;
	int game;
	t = clock();
	  for(int x=0; x<1000; x++)
    {
        cout<<endl;
    }
    cout<<"Clock ticks: "<<clock()<<" Seconds: "<<clock()/CLOCKS_PER_SEC;
}

#include <iostream>
using namespace std;

unsigned int diskey(unsigned key)
{
	key += ~(key << 15);
	key ^=  (key >> 10);
	key +=  (key << 3);
	key ^=  (key >> 6);
	key += ~(key << 11);
	key ^=  (key >> 16);
	return key;
}

int main()
{
	unsigned t;
	while(cin>>t)
		cout<<diskey(t)<<endl;
	return 0;
}

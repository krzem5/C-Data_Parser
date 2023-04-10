#include <data_parser.h>
#include <stdio.h>



int main(int argc,const char*const* argv){
	int a;
	float b;
	char c[256];
	unsigned int d;
	if (parse_data("Abc (text) -48 1.89 'The quick brown fox'",41,"Abc (%4?) %d %f '%s'",&a,&b,c,&d)){
		c[d]=0;
		printf("[%d], [%f], [%s]\n",a,b,c);
	}
	return 0;
}

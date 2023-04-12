#include <stdio.h>
#include <math.h>

int main(){
	int i;
	for(i=1;i<15;i++){
		if(i>8 && i<12)
		continue;
		printf("%d\n",i);
	}
	//for(i=1;i<9;i++){
	//	printf("%d\n",i);
	//}
	//for(i=12;i<15;i++){
	//	printf("%d\n",i);
	//}
	return 0;
}
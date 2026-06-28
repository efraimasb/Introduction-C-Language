#include <stdio.h>
int main (){
	char gender1[] = "Pria";
	char gender2[] = "Wanita";
	int a;
	
	//Membandingkan dua buah string 
	a = strcmp(gender1, gender2);
	
	
	if(a==0){
		printf("%s dan %s itu sama", gender1, gender2);
	}
	else{
		printf("%s dan %s itu berbeda", gender1, gender2);
	}
	return 0;
}

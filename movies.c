#include <stdio.h>
int main(){
	//Prompt User
	printf("How many movies have you watched this year?\n");
	//Variable for User Input
	int a;
	//Scanf reads what's entered into the console
	scanf("%d", &a);
	//Feedback for User
	printf("You entered: %d\n", a);
	//If a<10 prints one response, otherwise prints alt responce
	if(a>10){
		printf("I guess you like movies or whatever...\n");
	}else{
		printf("Wanna borrow my netflix?\n");
	}

	return 0;
}

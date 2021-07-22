#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void upper_case(char str[30]);
int main() {
	char str[30];
	printf("Please enter string :");
	gets(str);
	upper_case(str);
	
}
void upper_case(char str[30]){
	int i;
	for (i = 0;i<strlen(str);i++){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] = str[i] - 32;
		}
	}
	printf("\nString after upper case is :%s",str);
}

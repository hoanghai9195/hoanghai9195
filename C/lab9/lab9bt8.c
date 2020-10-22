#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void testchar(char str[30],char ch);
int main() {
	char str[30];
	char ch;
	printf("\nEnter string :");
	gets(str);
	printf("\nEnter a character:");
	scanf("%c",&ch);
	testchar(str,ch);
	
}
void testchar(char str[30],char ch){
int x = ch;
int i,dem;
if(x>=97 && x<=122){
	x=x+1;
	for(i=0;i<=strlen(str)-1;i++){
		if (str[i] == x){
			dem = dem+=1;
		}
	}
	if (dem == 0){
		printf("khong co ki tu %c trtong chuoi",x);
		
	}
	else{
		printf("co %d ki tu sau ki tu %c",dem,x);
	}
}
}

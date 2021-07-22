#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char word[20];
	int i,vowcnt=0,consonants=0;
	printf("\nEnter a word:");
	gets(word);
	for(i=0;i<strlen(word);i++){
		if((word[i]=='a') || (word[i]=='e') || (word[i]=='i') || (word[i]=='o') 
		|| (word[i]=='u') || (word[i]=='A') || (word[i]=='E') || (word[i]=='I')
		|| (word[i]=='O') || (word[i]=='U'))
		vowcnt++;
		else {
		
		consonants++;}
		
		
	}
	printf("\n The word is: %s \n The number of vowels in the word is:%d and consonant is:%d",word,vowcnt,consonants);
	return 0;
}

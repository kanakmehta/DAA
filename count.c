#include<stdio.h>
int count_words(char str[]){
     int words = 0;
     for (int i = 0; str[i] != '\0'; i++)
     {
          words++;
          
     }
     return words;
     
}
int main(){
     char word[100]; 
     int total_words;
     printf("enter a word:\n");
     scanf("%s", &word);
     total_words = count_words(word);
     printf("total characters: %d\n", total_words);
     return 0;
}
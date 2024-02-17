#include <stdio.h>
#include <string.h>

int main(){
    char sentence[1000] = "";
    printf("\n> Enter a sentence: ");
    fgets(sentence, 1000, stdin);
    int a_letter = 0, e_letter = 0, i_letter = 0, o_letter = 0, u_letter = 0;
    int i;
    for(i = 0; i < strlen(sentence); i++){
        switch(sentence[i]){
            case 'a':
            case 'A':
                a_letter++;
                break;
            case 'e':
            case 'E':
                e_letter++;
                break;
            case 'I':
            case 'i':
                i_letter++;
                break;
            case 'O':
            case 'o':
                o_letter++;
                break;
            case 'U':
            case 'u':
                u_letter++;
                break;
            default:
                break;
        }
    }
    printf("\nA/a: %d\tE/e: %d\tI/i: %d\tO/o: %d\tU/u: %d\n", a_letter, e_letter, i_letter, o_letter, u_letter);
   return 0; 
}
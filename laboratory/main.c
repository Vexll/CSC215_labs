#include <stdio.h> // 'include' similar to 'import' in other programming language, 'stdio.h' = 'standard I/O functions'

int main(){
    int random = 10;
    counter(random);
    return 0;
}

int counter(int number){
    int i;
    for ( i = 0; i < number; i++){
        if (i == 2)
            continue;

        printf("number = %d \n", i);
    }
    return 0;
}

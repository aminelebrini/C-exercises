#include <stdio.h>

int main() {
    
    char *words[] = {"audi","bmw","toyota"};
    
    for(int i = 0; i < sizeof(words) / sizeof(words[0]) ; i++)
    {
       printf("%s\n",words[i]);
    }
    

    return 0;
}

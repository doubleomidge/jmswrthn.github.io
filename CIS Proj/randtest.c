#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct CharacterSet{
    char name[12];
    char race[12];
    int strength;
    int health;
}

void CreateCharacter(){
    struct CharacterSet aCharacter;
    int quotient = dividend/divisor;
    
    printf("Enter character's name: ");
        scanf("%s", aCharacter.name);
    
    printf("Enter charactere's race: ");
        scanf("%s", aCharacter.race);
    
    printf("Enter strength: ");
        scanf("%lf", aCharacter.strength);
        
    printf("Enter health: ");
        scanf("%lf", aCharacter.health);
    
    printf("%s is %s and has a strength of %d and health of %d o\n", aCharacter.name, aCharacter.race, aCharacter.strength, aCharacter.health);
}

int main(){
    CreateCharacter();
    return 0;
}

int main() {
    srand(time(NULL));
    
		int dieVal= (rand() %6)+1;
		int otherDieVal= (rand() %6)+1;
        printf("%d %d \n", dieVal,otherDieVal );
	
    printf("\n");
}

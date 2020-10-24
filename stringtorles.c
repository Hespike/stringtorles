#include <stdio.h>

void digitless(char str[]){
    int uj_hossz = 0;
    for(int i = 0; str[i] != '\0'; i++){
       if(!(str[i] <= '9' && str[i] >= '0')){
           str[uj_hossz] = str[i];
           uj_hossz++;
       }
   }

   str[uj_hossz] = '\0';
}

int main(){
    char my_str[150];

    printf("Kerek egy stringet: ");
    scanf("%s", my_str);

    digitless(my_str);
    printf("Az uj string: '%s'", my_str);

    return 0;
}

//Irj egy eljarast, ami a parameterkent kapott stringbol kitorli a szamjegyeket.
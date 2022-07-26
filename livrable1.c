//entête

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

 
 //Corp du programme

int main()
 {

        //Déclaration

        int n=5, i =0, tab[5]={111,222,333,444,555};
        char codeSecret[80];

        //Saisie et lecture

        printf(" Veuillez saisir votre code secret: \n");
        scanf("%s", codeSecret);

/*tant que i est < la longueur de la chaine on teste si dans 
la chaine saisie il y'a un ou plusieurs caracteres
-si on trouve un caractere on lui demande de resaisir
-sinon on continue a tester jusqu'a ce que tt les cracteres soient des entiers 
pour qu'il autirise la saisie.
*/
             while(i < strlen(codeSecret))
            {
                if (isdigit(codeSecret[i]) ==0)
                {
                    printf(" Veuillez saisir un nombre: \n");
                    scanf("%s", codeSecret);
                }
                i++;
            }
            
        

        //Verification du code secret
        
        i = 0;
        while (i < n && atoi(codeSecret) != tab[i])
        {
            i++;
        }
            if (i < n)
            {
                printf("Votre code est correct. Bravot!!! \n\n");  
            }     
            else
            {
                for ( i = 1; i < 4; i++)
                {
                printf("le Code Secret est incorrect, Reéssayer %d fois:\n", i);
                scanf("%s", codeSecret);
                
                }   
     
    }

        printf("Au revoir \n\n");
       
}
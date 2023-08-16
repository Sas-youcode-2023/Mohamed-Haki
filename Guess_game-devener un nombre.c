#include <stdio.h>
#include <stdlib.h>
#include <time.h>



           int main() {
            
       
       	int estCorrect = 0;
       	int nEntre = 0;
       	int nTentative = 0;
       	int nombreAleatoire = 0;
       	const int MAX = 30, MIN = 1;
       	srand(time(NULL));
       	nombreAleatoire = (rand() % 30);
       	
       	printf("\tL'ordinateur a choisi un nombre entre 1 et 30, a vous  de le deviner en 5 tentative au maximum\n");
       		printf("\n");
       			printf("\n");
       do{
	
       nTentative++;
       printf(" quel est le nombre :");
       scanf("%d",&nEntre);
       if(nombreAleatoire>nEntre)
       	 printf(" C'est plus !!\n\n :");
       	  else if(nombreAleatoire<nEntre)
       	   printf(" C'est moins !!\n\n :");
       	       else{
       	       	estCorrect = 1;
       	       	break;
			  } 
			   }while(nTentative<5); 
			      if(estCorrect == 1)
			       printf("  BRAVO ! vous avez trouver %d en %d essais \n ",nombreAleatoire,nTentative);
			         else 
			              printf("Oups ! vous avez depasse les 5 tentatives autorisees. le nombre etait : %d\n",nombreAleatoire);
			      
       	       if(nTentative==1)
       	       printf(" BONUS :    BRAVO ! vous avez 15 DH BONUS ");
       	       else if(nTentative==2)
       	       printf("BONUS  :  BRAVO ! vous avez 10 DH BONUS ");
       	       else if(nTentative==3)
       	       printf("BONUS  :  BRAVO ! vous avez 5 DH BONUS ");
       	       else if(nTentative==4) 
       	       printf("BONUS  :  BRAVO ! vous avez 1 DH BONUS ");
       	       else if(nTentative==5) 
       	       printf("BONUS  :  DOMMAGE !! bon courage autre fois  ");
       	       getch();
       	
       return 0;	
       	
	 }
            

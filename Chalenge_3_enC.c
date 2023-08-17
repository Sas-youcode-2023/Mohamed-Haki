#include <stdio.h> //-----------------------Inclure la bibliothèque STanDard Input Output qui nous permetons d'utilisons, printf et scanf-------------------------------------
#include <stdlib.h>
#include <math.h>
                    
                    
                    
int main(){
	
	int P,sizeT = 30;
	float Ttaille[sizeT] , somme ,Mmoyenne ,imc;
	int i ;
	
//----------------------------------------------------Définir la fonction  et le role du programme-----------------------------------------------------------------------------
	printf("                       Ce programme est pour calcule la taille moyenne et le poids moyen des patienrs,\n                                            et affiche sont indice de masse corporielle\n                                           pour arreter la saisi entre un nombre <=0\n ");
		printf("\n");
		printf("\n");
		printf("\n");
	
	
//----------------------------------------------Enregistrer la taille des patients (en metre) sur le tableau Ttaille------------------------------------------------------------ 
	printf("                                  veuillez saisir la taille des patients (en metre) :\n ");
	i = 0;
	somme = 0;
	do{
 printf("\n-----------------------------------------------------------------------------------------------------------------\n");	
		printf(" Taille de patient %d :  ",i+1);
		scanf("%f",&Ttaille[i]);
		somme = somme + Ttaille[i];
		i=i+1;
		 if(Ttaille[i-1]<=0 ){
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		system("cls");
//---------------------------------------------------------------------messages d'errors si ons saisir la taille <=0--------------------------------------------------------------
			printf("LE PROGRAME EST STOP DE SAISIR CAR : vous avez saisir une erronee taille <= 0 !!\n"); 
			i--;
			break;
 
 
 		}
 
			
			

	    }while(Ttaille[i-1] > 0 && i < sizeT );
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
//---------------------------------------------------------------------------afficher le nombre total des patients.--------------------------------------------------------------------
printf("\n-----------------------------------------------------------------------------------------------------------------\n");	

	printf("                                          le nombre des patients est %d\n ",i);
 printf("\n-----------------------------------------------------------------------------------------------------------------\n");	
//-------------------------------------------------Pour chaque patient précédemment mesuré, Nous le sauvons  la masse dans le tableau Tmasse en (KG)-------------------------------------
      Mmoyenne = 0;
	float Tmasse[i];
		printf("veuillez saisir la masse des patients ( KG ) :\n ");
	for(P=0 ; P<i; P++){
			printf(" Masse de patient %d :  ",P+1);
		scanf("%f",&Tmasse[P]);
		Mmoyenne = Mmoyenne + Tmasse[P] ;
	
	}
		system("cls");
//---------------------------------------------------------------------Nous affichons la taille moyenne des patients----------------------------------------------------------------------- 
  printf("\n-----------------------------------------------------------------------------------------------------------------\n");	

		printf("\nLa taille moyenne des patients est : %.2f\n",somme / i);
  printf("\n-----------------------------------------------------------------------------------------------------------------\n");	
	
//---------------------------------------------------------------------Nous affichons la masse moyenne des patients----------------------------------------------------------------------- 


	    	printf("\nLa masse moyenne des patients est : %.2f\n",Mmoyenne / P);
	    	
  printf("\n-----------------------------------------------------------------------------------------------------------------\n");	

	    	
//-------------------------------------------Ici, nous calculons l’indice de masse corporelle et ons affichons sa mentions sous des conditons----------------------------------------------
	
	for(P = 0; P < i; P++) {
		imc = Tmasse[P] / (Ttaille[P] * Ttaille[P]);
		
		printf("\nIMC patient %d : %.2f", P + 1, imc);

		if(imc < 18.5) {
			printf(" => Pas assez");
		} else {
			if(imc > 25) {
				printf(" => Trop");
			} else {
				printf(" => Normal");
			}
		}
	}	
		return 0;
		
	}
	
	
	

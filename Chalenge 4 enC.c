#include <stdio.h> //-----------------------Inclure la bibliothèque STanDard Input Output qui nous permetons d'utilisons, printf et scanf-------------------------------------
#include <string.h>//-----------------------Inclure la bibliothèque STRING qui nous permetons d'utilisons, les fonctions de chaines de caracteres -------------------------------------
#include <stdlib.h>//-----------------------Inclure la bibliothèque STanDard Library-------------------------------------------------------------------------------------------------

//-----------------------------------------declaration des variables globales pour l'utilisons dans tout le programme----------------------------------------------------------
char Tph[100];
int i , j;
char 	verifier[]="AEYUIOWaeyuiow";

//----------------------------------------------la fonction qui fait supprimer les voyelles dans une chaine de caractere et de lui remplacer par des espaces-------------------
void  replace (char T[100]) {
for(i=0;i< strlen(verifier) ;i++){
	for(j=0;j< strlen(verifier) ;j++){
	if(T[i]==verifier[j])
		T[i]=' ';
	}
}
puts("la chaine apres le chengement du voayelles par des espaces est "); // la fonction qui aficher un message pour l'utilisateur
printf("%s",T); //la fonction qui afficher la chaine
}




//----------------------------------------------------------la fonction principale de notre programme --------------------------------------------------------------------------
int main(){
	printf("\t          ce programme est pour demander a l'utilsateur de saisir un chaine de caractere\n                           apres il fait chenger ses voyelles par des espaces:\n");
printf("\n");
printf("\n");
printf("\n");
printf("veuiller saisir une chaine :");
gets(Tph);// la fonctions qui lire la chaine qui a saiser par l'utilisateu------------------------------------------------------------------------------------------------------
replace(Tph);// l'appel du fonctions qui fait le chengement
return 0;
}



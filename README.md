#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
float  S , M ,NOMBRE,T[10];
int i, plus, moins;
NOMBRE = 0;
float MAX;
float MIN;
int pos1 , pos2;


printf("veuillez saisir les notes  \n "); 
       
       for(i=0;i<10;i++){
		
printf("veuillez saisir la note numero  %d : ",i+1);
scanf("%f",&T[i]);
       	NOMBRE++; 
		if(T[i]<0||T[i]>20)
	
		break;
		 
		 }
       	
 	 S=0;
	  for(i=0;i<10;i++){
	  S=S+T[i];	
}
     M=S/NOMBRE;
     printf("                                la somme des notes est %.2f \n",S);
      printf("                          \n");

printf("                                    la moyenne des notes est %.2f \n",M);

printf("                          \n");


for(i=0;i<10;i++){
	if(T[i]>M){
printf(" \n        %.2f              est superieure a la moyenne \n",T[i]);
	}
	else if(T[i]<M){
printf(" \n         %.2f              est inferieure a la moyenne \n",T[i]);
	}
	else 
printf("  \n              %.2f              est egale a la moyenne \n",T[i]);
}

for(i=0;i<10;i++){
	if(T[i]>M){
		plus++;}
		
		else 
			moins++;
		
}
printf("                          \n");

printf(" le nombre des notes superieure a la moyenne est %d\n",plus);
printf("                          \n");
printf("                          \n");
printf("                          \n");
printf(" le nombre des notes inferieur a la moyenne est %d \n" , moins);
     
     MAX=T[0];
     MIN=T[0];
     pos1 = 0;
     pos2 = 0;
     for(i=1;i<10;i++){
     	if(T[i]>MAX){
     		MAX = T[i];
     		 pos1=i+1;
	     }
	    
     }
      for(i=1;i<10;i++){
     if(T[i]<MIN){
     		MIN = T[i];
     		 pos2=1+i;
	     }
	    
     }
     
printf("                          \n");
printf("                          \n");
printf("                          \n");

     
printf("la note maximume est %.f est sa position dans le tableau est %d ",MAX,pos1);
     
     
printf("                          \n");
printf("                          \n");
printf("                          \n");


printf("la note minimum est %.f est sa position dans le tableau est %d",MIN,pos2);

     
     return 0 ;
}


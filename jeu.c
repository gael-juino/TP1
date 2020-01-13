#include <stdio.h>

int main(){
	int PVM=100;
	int attaque1=20;
	int attaque2=50;
	int Dead=0;
	int PVP=100;
	int CA= 10;

 PVM = 100;
	while ( PVM > 0){
		if (PVM!=0){
		printf("Point de vie du monstre = %d \n",PVM);
		printf("Le joeur attaque enleve 20 point de vie \n");
		PVM=PVM-attaque1;
		}
		
		PVP=PVP-CA;
		printf("Le monstre contre-attaque enleve 10 point de vie \n");
		printf("Point de vie du joueur =%d \n",PVP);

	}
		printf("Point de vie du monstre =%d \n", Dead);
		printf("le monstre est mort \n");

	return 0;	
}




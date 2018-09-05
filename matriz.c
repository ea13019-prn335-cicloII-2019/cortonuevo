


#include <stdio.h>

int main(){
	
	
	int n=0,suma=0;
	
	
	printf("ingrese un tamaño");
	scanf("%i",&n);
	
	
	int mul=n*n;
	int k=0,cont2=0;
	int vector[mul];
	
	int matriz1[n][n];
	int matriz2[n][n];
	int matrizr[n][n];
			
	int fil=0,col=0,rep=0,fil2=0;
	
	for(col=0; col<n;col++){
		for( fil=0; fil<n;fil++){
	
	printf("ingrese un numero");
	scanf("%i",&matriz1[col][fil]);
	
	
	}
	
}
	
	for(col=0; col<n;col++){
		for(fil=0; fil<n;fil++){
	
	printf("ingrese un numero");
	scanf("%i",&matriz2[col][fil]);
	
	}
	
}

	for(col=0; col<n;col++){
		for(fil=0; fil<n;fil++){
	
	printf("%i ",matriz2[col][fil]);
	
	
	}
	printf("\n");
	
}

for(rep=0;rep<n;rep++){
for(col=0; col<n;col++){
		for( fil=0; fil<n;fil++){
	
	suma=suma+(matriz1[rep][col]*matriz2[col][fil]);
	
	
	}
	
	matrizr[rep][col]=suma;
	suma=0;
	
}
	

}



int cont=0;


for(col=0;col<n;col++){
		for(fil=0; fil<n;fil++){
			
	
	for(int num=1;num<matrizr[col][fil]+1;num++){
			if(matrizr[col][fil]%num==0){
				cont=cont+1;
				
			}
			
	
	}
	
	if(cont==2){
		printf("es primo %i",matrizr[col][fil]);
		vector[k]=matrizr[col][fil];
		printf("el numero %i es primo en la posicion %i %i",matrizr[col][fil],col,fil);
		cont2++;
		
	}
	
	cont=0;
	
	}
}
	
	for(fil=0; fil<cont2;fil++){
	
	printf("%i",vector[fil]);
}


	
	return 0;
}


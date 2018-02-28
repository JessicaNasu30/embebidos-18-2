#include<stdio.h>
#include<stdlib.h>
#include"defs.h"

void guarda_datos (float datos[]){
	FILE *ap_arch;
	register int i;
	ap_arch=fopen("seno.dat","w");

	if(!ap_arch){
		perror("Error al abrir el archivo...");
		exit(EXIT_FAILURE);
	}

	for(i=0; i<MUESTRAS; i++){
		fprintf(ap_arch,"%f \n", datos[i]);
	}
	fclose(ap_arch);
}

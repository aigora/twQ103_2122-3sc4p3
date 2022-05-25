#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>
#include<conio.h>
#define puntaje 10
#define puntaje2 5

//DECLARACION DE FUNCIONES DE USO CORRIENTE EN EL JUEGO
struct game{
	char nombre[50];
	int puntos;
};


void imprimir_enunciados(int nivel){
	
	char enunciado[15][100]={"acertijo1.txt", "acertijo2.txt", "acertijo3.txt", "acertijo4.txt","acertijo4-1.txt","acertijo5.txt", "acertijo5-1.txt", "acertijo6.txt", "acertijo7.tx", "acertijo7-1.txt","acertijo7-2.txt", "acertijo7-3.txt", "acertijo8.txt","acertijo9.txt", "acertijo10.txt"};
	char texto;
	
	FILE *escenario;
	escenario=fopen(enunciado[nivel], "r");
	if(escenario==NULL){
		printf("FICHERO NO ENCONTRADO");
	}else{
		while((texto=fgetc(escenario))!=EOF){
			printf("%c", texto);
		}
 	}
 	fclose(escenario);
}

void continuar(int *nivel){
	printf("Presione cualquier tecla para continuar\n\n");
    char letra= getch();
           system("cls");
               
    *nivel+=1; //SE PASA DE NIVEL
    return;
}

void quedeseahacer(char nombre[]){ 

printf("QUE DESEA HACER %s ?:\
\n 1. PISTA\
\n 2. ESCRIBIR SOLUCION\n", nombre);

return;

}

void menu2(){
	
	printf("\n");
	printf("HAS SELECCIONADO COMENZAR A JUGAR!!!!! \n");
	printf("\n");
	
	char introd;
	
	FILE *intro;
	intro=fopen("introduccion.txt", "r");
	if(intro==NULL){
		printf("FICHERO NO ENCONTRADO");
	}else{
		while((introd=fgetc(intro))!=EOF){
			printf("%c", introd);
		}
    }
    fclose(intro);
    printf("\n\n");
	
	return;
}

void menu(){
	system("color 0A");
	printf("\n");
	printf("               ****************************************************************************\n");
	printf("            ****************************  BIENVENIDO AL 3SC4P3    ***************************\n");
	printf("               ****************************************************************************\n");
	
	printf("\n");
	printf("\n");
	printf("                          POR FAVOR SELECCIONE UNA OPCION:\n");
	printf("\n");
	printf("                          1. LEER INSTRUCCIONES\n");
	printf("                          2. PUNTUACIONES\n");
	printf("                          3. COMENZAR A JUGAR\n");
	
	
	return;

};

//FUNCIONES AUXILIARES

void postit(){
	
	
	int i, j;

    char papel[5][21] = {
                            {" __________________"},
                            {"|        Z         |"},
                            {"|                  |"},
                            {"| H    N   P    Na |"},
                            {"|__________________|"},
                            
                        };

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 21 ; j++)
        {
            printf("%c", papel[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

void codigoprofesor(){
	
	int i, j;

    char codigo[4][21] = {
                            {" __________________"},
                            {"|                  |"},
                            {"| 1 3 6 10 15 ? ?  |"},
                            {"|__________________|"},
                             };

    for (i = 0 ; i < 4 ; i++)
    {
        for (j = 0 ; j < 21 ; j++)
        {
            printf("%c", codigo[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

void tablon(){
	
	
	int i, j;
	
	int matriz[4][4] = {   {10, 67, 21, 31},
                           {14, 19, 39, 62},
                           {80, 48, 97, 01},
                           {12, 21, 06, 68}, };
                         

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
		printf("[ %d ]\t", matriz[i][j]);
			}
            printf("\n");
     }
     return;
     printf("\n");
}

void paneldecontrol(){
	
	int i, j;

    char panel[6][25] = {
                            {" ______________________"},
                            {"|                      |"},
                            {"|   X              X   |"},
                            {"|   X ------X------X   |"},
                            {"|   X              X   |"},
							{"|______________________|"},
                            
                        };

    for (i = 0 ; i < 6 ; i++)
    {
        for (j = 0 ; j < 25 ; j++)
        {
            printf("%c", panel[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

void tabla(){
	
	int i, j;

    char pista[5][20] = {
                            {"|           "},
                            {"|      X    "},
                            {"|           "},
                            {"|  X     X  "},
                            {"|_ _ _ _ _ _"}
                        };

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 12 ; j++)
        {
            printf("%c",pista[i][j]);
        }
        printf("\n");
    }
    
    return;
}

void telefono(){
	
	int i, j;

    char movil[8][20] = {
                            {" ___________"},
                            {"|           |"},
                            {"|    ----   |"},
                            {"| 1   2   3 |"},
                            {"| 4   5   6 |"},
                            {"| 7   8   9 |"},
                            {"| *   0   # |"},
							{"|__  call __|"}
							
							
                        };

    for (i = 0 ; i < 8 ; i++)
    {
        for (j = 0 ; j < 13 ; j++)
        {
            printf("%c",movil[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

void tarjeta(){
	
	int i, j;

    char tarjetapuerta[5][21] = {
                            {" __________________"},
                            {"|                  |"},
                            {"| R  J  G  A  A  U |"},
                            {"| 3  2  5  1  1  4 |"},
                            {"|__________________|"},
                            
                        };

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 21 ; j++)
        {
            printf("%c", tarjetapuerta[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

void mensajeclase(){
	
	int i, j;

    char ingles[5][21] = {
                            {" __________________"},
                            {"|                  |"},
                            {"|  SISTEMA DE SEG. |"},
                            {"|   DESACTIVADO    |"},
                            {"|__________________|"},
                            
                        };

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 21 ; j++)
        {
            printf("%c", ingles[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

void maqexp(){
	
	int i, j;

    char expendedora[8][20] = {
                            {" ___________"},
                            {"|           |"},
                            {"|    - -    |"},
                            {"| A   B   C |"},
                            {"| D   E   F |"},
                            {"| 1   2   3 |"},
                            {"| 4   5   6 |"},
							{"|___________|"}
							
							
                        };

    for (i = 0 ; i < 8 ; i++)
    {
        for (j = 0 ; j < 13 ; j++)
        {
            printf("%c", expendedora[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

//CUERPO DEL JUEGO

int main(){
	
	int numjugadores, i=0;
	printf("introduce el numero de jugadores:\n");
	scanf("%d", &numjugadores);
	struct game jugadores[numjugadores];
	
	for(i=0; i<numjugadores; i++){
		printf("nombre jugador:\n");
		scanf("%s", jugadores[i].nombre);
		
	}
	
	int nivel=0;
	
	int opcionMenu;
    FILE * fentrada;
    
    	bool bandera=true;
    
		while(bandera){
		menu();
		char inst;
		scanf("%d", &opcionMenu);
			switch(opcionMenu){
				
		        case 1: //fichero para leer las instrucciones
	        	system("cls");
					fentrada = fopen("instrucciones.txt","r"); 
					if(fentrada==NULL){
					printf("Error: el fichero no se ha encontrado");
					bandera=false;
					return 0;
					}else{
				   	while((inst=fgetc(fentrada))!=EOF){
				   		printf("%c", inst);
				   	}
				    }
				    fclose(fentrada);
				    return main();
					break;
	
	            case 2:// fichero para leer las puntuaciones
			    break;
		
		
				case 3: //opción de comenzar a jugar
				menu2();
				printf("Presiona cualquier tecla para continuar.");
				getch();
				system("cls");
		
// ACERTIJO 1 
		
		int opcion1, solucion1;
		
		imprimir_enunciados(nivel);
		
	    
	    postit();
	    printf("\n");
	    
	bool resuelto = false;
	bool puntajeT= true;
	bool pistaCogida=false;

	    while(!resuelto){
		i=0;
		
			quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion1);
		
	
		switch(opcion1){
			case 1: 
		    pistaCogida=true;
			printf("Pista: Recuerda que estabas en clase de quimica, que significaba la letra Z?\n\n");
			
			break;
			case 2:
				printf("Cual es la clave?:  ");
				scanf("%d", &solucion1);
				if(solucion1==171511){
					printf("\n\n");
					printf("SOLUCION CORRECTA!\n\n");
					printf("*****DESBLOQUEANDO ORDENADOR*****\n");
					resuelto=true;
					if(pistaCogida){
						jugadores[i].puntos=puntaje2;
					}else{
					    jugadores[i].puntos=puntaje;	
					}
					
					
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		             }
		    i++;
			if(i==numjugadores){
				i=0;
			}	  			
	}
	
	
	continuar(&nivel);

// ACERTIJO 2
	
	
	int opcion2, solucion2;
		
	imprimir_enunciados(nivel);
	codigoprofesor();
	
	resuelto = false;
	i=0;
	
	while (!resuelto){
		quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion2);
	
		switch(opcion2){
			case 1: 
			printf("Pista: Ves algun patron? alguna suma? (1..2..3..4..)\n\n");
			break;
			case 2:
				printf("Que numeros faltan? (sin espacios):  ");
				scanf("%d", &solucion2);
				if(solucion2==2128){
					printf("SOLUCION CORRECTA!\n");
					printf("*****ABRIENDO ARMARIO*****\n\n");
					printf("Has encontrado una llave y un papel con un numero: 2005\n\n");
					resuelto = true;
					if(pistaCogida){
						jugadores[i].puntos+=puntaje2;
					}else{
					    jugadores[i].puntos+=puntaje;	
					}
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		}	
		 i++;
			if(i==numjugadores){
				i=0;
			}
	    }
	    
	    continuar(&nivel);

//ACERTIJO 3

    
	int opcion3, solucion3;
		
    imprimir_enunciados(nivel);
	
	printf("\n\n");
	tablon();
	printf("\n\n");
	
	printf("Puedes descifrar cual es el digito que falta en el correo electronico?\n\n");
	
	resuelto= false;
	
	i=0;
	while (!resuelto){
		quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion3);
	
		switch(opcion3){
			case 1: 
			printf("Pista: Ves si se repite algun numero?\n\n");
			break;
			case 2:
				printf("Lo tienes ya? probemos:  ");
				scanf("%d", &solucion3);
				if(solucion3==21){
					printf("CORRECTO!\n\n");
					printf("EL CORREO DESEADO ES: mantenimiento21@3sc4p3.com\n");
					resuelto=true;
					if(pistaCogida){
						jugadores[i].puntos+=puntaje2;
					}else{
					    jugadores[i].puntos+=puntaje;	
					}
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		}	
		i++;
			if(i==numjugadores){
				i=0;
			}		
	    }	 
	    
	    continuar(&nivel);
	    
// ACERTIJO 4
       
       int opcion4, solucion4;
	   char email1[100];
   	   char email2[100]="mantenimiento21@3sc4p3.com";
	
	printf("                            4. EL ASCENSOR\n\n");
	
	bool ascensor = true;
	
	while(ascensor){
		fflush(stdin);
	printf("A quien desea enviarle el correo electronico?:    ");
	gets(email1);
	if(strcmp(email1,email2)==0){
	         imprimir_enunciados(nivel);
			 ascensor=false;
	}else{
		printf("-EL CORREO ELECTRONICO INTRODUCIDO NO EXISTE- \n\n");
	}
}
	nivel++;
	imprimir_enunciados(nivel);
	
	paneldecontrol();
		  
		  
		  for(i=1; i<10; i++){
		  	printf("[%d]\t", i);
		  }
		  printf("\n");
		  
		  resuelto= false;
    i=0;
	while (!resuelto){
		quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion4);
	
		switch(opcion4){
			case 1: 
			printf("Pista: Puede que el 5 y el 7 te estorben un poco.\n\n");
			break;
			case 2:
				printf("Has podido encontrar el numero?:   \n");
				scanf("%d", &solucion4);
				if(solucion4==72){
					printf("NUMERO DE COMBINACION CORRECTO. \n\n");
					printf(" ***ASCENSOR CONFIGURADO A MODO MANUAL***\n");
					resuelto=true;
					if(pistaCogida){
						jugadores[i].puntos+=puntaje2;
					}else{
					    jugadores[i].puntos+=puntaje;	
					}
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		}	
		i++;
			if(i==numjugadores){
				i=0;
			}		
	}	 
	
	continuar(&nivel);
	
	//ACERTIJO 5
	
	
	int opcion5, solucion5;
	
	imprimir_enunciados(nivel);
	
	printf("\n");
	
	tabla();
	
	nivel++;
	imprimir_enunciados(nivel);
	
	resuelto=false;
	i=0;
	while (!resuelto){
		quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion5);
	
		switch(opcion5){
			case 1: 
			printf("Pista: las X representan las coordenadas en un plano cartesiano. \n\n");
			break;
			case 2:
				printf("Lo tienes? Intenta haciendolo en el orden X1,Y1.. X2,Y2...:   ");
				scanf("%d", &solucion5);
				if(solucion5==224452){
					printf("COORDENADAS CORRECTAS\n");
					printf("*****CAJA ABIERTA*****\n\n");
					resuelto=true;
					if(pistaCogida){
						jugadores[i].puntos+=puntaje2;
					}else{
					    jugadores[i].puntos+=puntaje;	
					}
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		}	
		i++;
			if(i==numjugadores){
				i=0;
			}		
	    }
	
	continuar(&nivel);
	
//ACERTIJO 6

int opcion6, solucion6;

    imprimir_enunciados(nivel);
    telefono();
	resuelto=false;
	i=0;
	while (!resuelto){
		quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion6);
	
		switch(opcion6){
			case 1: 
			printf("Pista: Recuerdas el numero que has encontrado en el armario junto con la llave? \n\n");
			break;
			case 2:
				printf("Cual era el numero?:   ");
				scanf("%d", &solucion6);
				if(solucion6==2005){
					printf("NUMERO VALIDO\n");
					printf("*****LLAMADA EN PROCESO*****\n\n");
					resuelto=true;
					if(pistaCogida){
						jugadores[i].puntos+=puntaje2;
					}else{
					    jugadores[i].puntos+=puntaje;	
					}
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		        }
				i++;
			if(i==numjugadores){
				i=0;
			}	
	
	nivel++;
	imprimir_enunciados(nivel);	
	
	continuar(&nivel);
	
	//ACERTIJO 7
	
   char uso3[50];
   char uso4[50]="abrir caja";
   int opcion7, solucion7;
	
	imprimir_enunciados(nivel);	
		  
	printf("PRESIONE ENTER PARA ABRIR LA PUERTA\n\n");
	getch();
	
	printf("*****PUERTA ABIERTA*****\n\n");
	system("pause");
	printf("\n");
	system("cls");
	
	nivel++;
	imprimir_enunciados(nivel);
	
	fflush(stdin);	   
	printf("Escribe 'abrir caja':\n");
	printf("----->  ");
	scanf("%s", uso3);
	if(strcmp(uso3,uso4)==0){
		printf("***CAJA ABIERTA***\n\n\n");
		}
	fflush(stdin);
	printf("\n");
	system("cls");
	
	nivel++;
	imprimir_enunciados(nivel);
	       
	tarjeta();
	
	
		  
		resuelto=false;
	i=0;
	while (!resuelto){
		quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion7);
		
	
		switch(opcion7){
			case 1: 
			printf("Pista: Si ordenas las letras, obtendras la combinacion.\n\n");
			break;
			case 2:
				printf("Has encontrado la combinacion? probemosla:   ");
				scanf("%d", &solucion7);
				if(solucion7==215413){
					printf("COMBINACION CORRECTA!\n");
					printf("*****PUERTA ABIERTA*****\n\n");
					resuelto=true;
					if(pistaCogida){
						jugadores[i].puntos+=puntaje2;
					}else{
					    jugadores[i].puntos+=puntaje;	
					}
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		}
		i++;
			if(i==numjugadores){
				i=0;
			}			
	}	
  continuar(&nivel); 
  
  //ACERTIJO 8

  
  int opcion8; 
	char solucion8[100]="germany";
	char solucionx[100];
	
		imprimir_enunciados(nivel);
		
		  
		  resuelto = false;
		  
	i=0;
	while (!resuelto){
		quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion8);
	
		switch(opcion8){
			case 1: 
			printf("Pista: la clave es el pais estudiado esta semana en clase de INGLES. Que pais muy conocido de Europa tiene por capital la B?.\n\n");
			break;
			case 2:
				fflush(stdin);
				printf("Veamos si has encontrado el pais: ");
				gets(solucionx);
				if(strcmp(solucionx,solucion8)==0){
					printf("*****ALERTA....ALERTA*****\n\n");
					resuelto=true;
					if(pistaCogida){
						jugadores[i].puntos+=puntaje2;
					}else{
					    jugadores[i].puntos+=puntaje;	
					}
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		}
		i++;
			if(i==numjugadores){
				i=0;
			}			
	}
	
  mensajeclase();
  continuar(&nivel);
  
  //ACERTIJO 9
  
  char combinacion[50];
  char solucion9[50]="b4";
  int opcion9;
  
	    imprimir_enunciados(nivel);
	     	
	    maqexp();
	    
	    printf("Te das cuenta de que la maquina solo admite una combinacion valida para iniciarla y solo tienes una moneda... Se te ocurre alguna combinacion\
	    \n en especifico?\n\n");
		
	resuelto = false;
	
	i=0;
	while(!resuelto){
		quedeseahacer(jugadores[i].nombre);
		scanf("%d", &opcion9);
	
		switch(opcion9){
			case 1: 
			printf("Pista: En la caja que has encontrado dentro de la sala de materiales, has encontrado otra cosa aparte de la tarjeta de acceso? \n\n");
			break;
			case 2:
				fflush(stdin);
				printf("Cual es la combinacion de la maquina expendedora?:   ");
				gets(combinacion);
				if(strcmp(combinacion,solucion9)==0){
					printf("***COMBINACION CORRECTA***\n");
					resuelto = true;
					if(pistaCogida){
						jugadores[i].puntos+=puntaje2;
					}else{
					    jugadores[i].puntos+=puntaje;	
					}
				}else{
					printf("SOLUCION INCORRECTA, VUELVA A INTENTARLO.\n\n");
				}
				break;
			default:
				printf("OPCION NO VALIDA.\n\n");
		}
		i++;
			if(i==numjugadores){
				i=0;
			}			
	}
	
	continuar(&nivel);
	
	// ACERTIJO 10 (FINAL)
	
	imprimir_enunciados(nivel);	
	bandera=false;
	for(i=0; i<numjugadores; i++){
	    printf("%s con %d quimicripton\n ", jugadores[i].nombre, jugadores[i].puntos);
	}
	break;
	
	

    
}
}
}
return 0;
}

#include <stdio.h>
#include <windows.h>

void menu();
void menu2();

int main(){
	
	
	system("cls");
	int opcionMenu;
    FILE * fentrada;
	
	while(1){
	
	system("cls");
	menu(); //lamada a la función menú
	
			do{//Selección de opción del menú principal
			scanf("%d",&opcionMenu);
				if(opcionMenu<1||opcionMenu>3)
				printf("OPCION INCORRECTA. VUELVA A INTENTARLO\n");			
			}while(opcionMenu<1||opcionMenu>3);			
				
			switch(opcionMenu){
				
		        case 1:// fichero para leer las instrucciones
	        	/*system("cls");
				printf("LEER INSTRUCCIONES\n");

					fentrada = fopen("Instrucciones.txt","r");//Apertura fichero fentrada
					if(fentrada==NULL){
					printf("Error: el fichero no se ha encontrado");
					fclose(fentrada);
					
					printf("\nPulse una tecla para volver al menu principal\n");
					getchar();
					system("cls");
				}*/
				
			break;
		
		
		case 2:// fichero para leer las puntuaciones
			
			break;
		
		
		case 3: //opción de comenzar a jugar
		menu2();
			break;
		
	}//cierr el switch  

   }//cierra el while
} //cierra main


//FUNCIONES

//menu principal
void menu(){
	
	printf("\033[0;31m");
	printf("\n");
	printf("               ****************************************************************************\n");
	printf("               **********************BIENVENIDO AL SCAPE ROOM******************************\n");
	printf("               ****************************************************************************\n");
	printf("\033[0m");
	
	printf("\n");
	printf("\n");
	printf("                          POR FAVOR SELECCIONE UNA OPCION:\n");
	printf("\n");
	printf("                          1. LEER INSTRUCCIONES\n");
	printf("                          2. PUNTUACIONES\n");
	printf("                          3. COMENZAR A JUGAR\n");
	

};

//menu dentro de comenzar a jugar
void menu2(){
	
	printf("HAS SELECCIONADO COMENZAR A JUGAR\n");
	printf("\n");
	printf("\n");
	printf("                              POR FAVOR RESPONDA A LAS SIGUIENTES PREGUNTAS:\n");
}

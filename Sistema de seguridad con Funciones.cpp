#include <iostream>
using namespace std;


int validarPw(int, int);
void adminBloq(int,int);
int cambioPw(int);

int main(){

	int pw = 12345, returnUser, pwUser, pwAdmin = 54321, a, returnNewPw, newPw;
	
	cout<<"Ingrese la contraseņa de usuario: ";
	cin>>pwUser;
	
	
	returnUser = validarPw(pw,pwUser);
	
	adminBloq(pwAdmin,returnUser);


	

 		
return 0;
}




int validarPw(int pw, int pwUser){
		int seleccion;
		
		for(int i =0; i<3 ; i++){
			
			if(pw != pwUser && i ==2){
			cout<<"El numero de intentos maximo ha sido alcanzado, la cuenta esta bloqueada \nPorfavor presione 1 para continuar como admin";
			cin>>seleccion;
			return seleccion;
		
				
			}else if(pw != pwUser){
			cout<<"La contraseņa es incorrecta, intente de nuevo\n Este es el intento numero "<<i+2<<endl;
			cin>>pwUser;	
			
			}else{
				cout<<"Contraseņa correcta";
				i=2;
				cambioPw(pwUser);
				//funcion de cambiar pw
			}
			
			
		}
	
		
}



void adminBloq(int pwAdmin, int confirmacion){
	
	int pwInput;
	
	if (confirmacion == 1){
		
		cout<<"Ingrese la clave de administrador para desbloquear el equipo: ";
		cin>>pwInput;
		
		
		for(int i =0; i<2 ; i++){
		
		
		
		if(pwAdmin != pwInput && i ==1){
			cout<<"La contraseņa de administrador es incorrecta, el equipo se ha bloqueado permanentemente ";
			
				
			}else if(pwAdmin != pwInput){
			cout<<"La contraseņa de administrador es incorrecta, tiene un ultimo intento ";
			cin>>pwInput;
			
			}else{
				cout<<"Contraseņa correcta"<<endl;
				i=2;
				system("cls");
				cambioPw(pwInput);
				//funcion de cambiar pw
			}
		
		
		}
		
	}
	
}




int cambioPw(int currentPw){
	int newPw;
	cout<<"Ingrese una contraseņa nueva: ";
	cin>>newPw;
	
	while(newPw == currentPw){
		cout<<"La contraseņa es igual a la anterior, porfavor intente de nuevo";
		cin>>newPw;
	}
	
	return newPw;
	
}

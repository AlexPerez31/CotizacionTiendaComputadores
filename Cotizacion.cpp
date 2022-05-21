/*  Alex Jordan Perez Rojas    Codigo:20172578109
Programa "Cotizacion":
El siguiente programa emula las funcion de una cotizacion de una tienda
de tecnologia donde se compran los computadores por partes y asi mismo
armarlos al gusto y presupuesto del cliente. Este programa genera 3
cotizaciones (archivos) que el cliente puede hacer:
1-Bajo Costo: Es la combinacion de partes mas barata para el comprador.
2-Alto Costo: Es la combinacion de las partes que desee el comprador asi no 
			  sea barato.
3-Portatil: Un computador portatil no se vende por partes, asi que es la 
			de un portatil mas sus perifericos.
Este programa contiene 4 clases 3 abstractas y 1 derivada, las cuales 
realizan herencia por tres niveles, estas clases son:
-ABUELO: class tipo.
-PADRES: class torre,  class perifericos.
-HIJO:   class computador.
la clase tipo inicializa la varible que decide el tipo de computador, las 
clases torre y perifericos contienen las variables y funciones que dan y
guardan las opciones de los distintos elemntos del computador, y la clase
computador es la primera que se ejecuta, se encarga de hacer los calculos
y de imprimir las cotizaciones (archivos).
*/
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

class tipo{
	public:
		void tipoc();
};

void tipo::tipoc(){
	cout<<endl<<endl<<"       ||Cotizacion de parte de computador||"<<endl;
	cout<<"		|1.Generar cotizacion|"<<endl;
	cout<<"		|2.Salir|"<<endl;
}

class torre:public tipo{
	protected:
	int d;
	char mem[50], proc[50], discod[50], tarjma[50], port[50];
	char marmen[50], marpro[50], mardiscod[50], martarjam[50], marport[50];
	int memoria, procesador, hdd, board, portatil;
	long preciopro, preciomem, preciohdd, precioboard, precioportatil;
	public:
		void proce();
		void memram();
		void disco();
		void tarjetama();
		void portatiles();
		void ver();
};

void torre::portatiles(){  //Funcion para comprar portatil
	precioportatil = 0;
	do{
		cout<<"\tSeleccione el Portatil que Desea Comprar\t"<<endl;
	    cout<<" Digite el portatil segun el numero\n";
	    cout<<"1. Asus X441N Celeron | 785.000"<<endl;
	    cout<<"     Intel Celeron Dual core "<<endl;
	    cout<<"     Disco Duro 500GB "<<endl;
	    cout<<"     Memoria 4GB "<<endl;
	    cout<<"     Pantalla 14'' HD "<<endl;
	    cout<<"2. HP 245 G5 A8 |  950.000"<<endl;
	    cout<<"     AMD A8 7410  "<<endl;
	    cout<<"     Disco Duro 500GB "<<endl;
	    cout<<"     Memoria 4GB "<<endl;
	    cout<<"     Pantalla 14'' "<<endl;
	    cout<<"3. Acer A515-41G -13QS | 1.699.000"<<endl;
	    cout<<"     AMD A12 9720P   "<<endl;
	    cout<<"     Disco Duro 1TB  "<<endl;
	    cout<<"     Memoria 8GB DDR4  "<<endl;
	    cout<<"     Pantalla de 15.6'' HD '' "<<endl;
	    cout<<"4. DELL i7559-2512BLK | 2.850.000"<<endl;
	    cout<<"     Intel Core i7 6700HQ   "<<endl;
	    cout<<"     Disco Duro 1TB  "<<endl;
	    cout<<"     Memoria 8 GB  "<<endl;
	    cout<<"     Pantalla de 15.6'' "<<endl;
	    cin>>portatil;
		switch(portatil){
			case 1:
				precioportatil = 785000;
				strcpy(port,"Asus X441N Celeron");
				strcpy(marport,"Asus");
				fflush(stdin);
				system("cls");
				break;
			case 2:
				precioportatil = 950000;
				strcpy(port,"HP 245 G5 A8");
				strcpy(marport,"HP");
				fflush(stdin);
				system("cls");
				break;
			case 3:
				precioportatil = 1699000;
				strcpy(port,"Acer A515-41G -13QS");
				strcpy(marport,"Acer");
				fflush(stdin);
				system("cls");
				break;
			case 4:
				precioportatil = 2850000;
				strcpy(port,"DELL i7559-2512BLK");
				strcpy(marport,"DELL");
				fflush(stdin);
				system("cls");
				break;
			}
			}while((portatil<1) or (portatil>4));
}
void torre :: proce(){   //Funcion para comprar procesador
	preciopro = 0;
	do{
		cout<<"\tAñadir Procesador\t"<<endl;
	    cout<<" Digite el procesador segun el numero\n";
	    cout<<"1. Intel G4560 3.5 G | 270.000"<<endl;
	    cout<<"2. Intel Core I3 7100 3.9 GHZ | 360.000"<<endl;
	    cout<<"3. Intel Core I5 7400 3.0 - 3.5 GHZ | 575.000"<<endl;
	    cout<<"4. Amd Ryzen 1200  3.1 3.4 GHZ | 330.000"<<endl;
	    cout<<"5. Amd Ryzen 1400 3.2 3.4 GHZ | 490.000"<<endl;
	    cout<<"6. Amd Ryzen 1600 3.2 3.6 GHZ | 650.000"<<endl;
	    cin>>procesador;
		if(procesador == 1){
			preciopro=270000;
			fflush(stdin);
			strcpy(proc,"intel G4560 3.5 G");
			strcpy(marpro,"intel");
			system("cls");}
			else if(procesador == 2){
			preciopro=360000;
			strcpy(proc,"core i3 7100 3.9 GHZ");
			strcpy(marpro,"intel");
			fflush(stdin);			
			system("cls");}
		else if(procesador == 3){
			preciopro=575000;
			strcpy(proc,"i 7400 3.0 - 3.5 GHZ");
			strcpy(marpro,"intel");
			fflush(stdin);			
			system("cls");}	
		else if(procesador == 4){
			preciopro=330000;
			strcpy(proc,"Amd Ryzen 1200  3.1 3.4 GHZ");
			strcpy(marpro,"Amd");
			fflush(stdin);		
			system("cls");}
		else if(procesador == 5){
			preciopro=490000;
			strcpy(proc,"Amd Ryzen 1400 3.2 3.4 GHZ");
			strcpy(marpro,"Amd");
			fflush(stdin);	
			system("cls");}
		else if(procesador == 6){
			preciopro=650000;
			strcpy(proc,"Amd Ryzen 1600 3.2 3.6 GHZ");
			strcpy(marpro,"Amd");
			fflush(stdin);	
			system("cls");}	
		}while((procesador<1) or (procesador>6));
}
void torre :: memram(){ //Funcion para comprar memoria ram
	preciomem=0;
	do{
		cout<<"\tMemoria\t"<<endl;
	    cout<<"Digite la memoria segun el numero\n";
	    cout<<"1. 4 GB DDR4 2400 | 175.000"<<endl;
	    cout<<"2. 8 GB DDR4 2400 | 299.000"<<endl;
	    cout<<"3. 16 GB DDR4 2400 | 599.000"<<endl;
	    cin>>memoria;
		switch(memoria){
			case 1:
				preciomem = 175000;
				strcpy(mem,"4 GB DDR4 2400");
				strcpy(marmen,"DDR4");
				fflush(stdin);
				system("cls");
				break;
			case 2:
				preciomem = 299000;
				strcpy(mem,"8 GB DDR4 2400");
				strcpy(marmen,"DDR4");
				fflush(stdin);
				system("cls");
				break;
			case 3:
				preciomem = 599000;
				strcpy(mem,"16 GB DDR4 2400");
				strcpy(marmen,"DDR4");
				fflush(stdin);
				system("cls");
				break;
	}
	}while((memoria<1) or (memoria>3));
}
void torre :: disco(){ //Funcion para disco duro
	preciohdd=0;
	do{
		cout<<"\t Añadir Disco Duro\t"<<endl;
	    cout<<"Digite el disco duro segun el numero\n";
        cout<<"1. 1 TB 7200 RPM 64B TOSHIBA | 155.000"<<endl;
	    cout<<"2. 2 TB 7200 RPM TOSHIBA | 200.000"<<endl;
	    cout<<"3. 3 TB 7200 RPM TOSHIBA | 260.000"<<endl;
	    cin>>hdd;
		switch(hdd){
			case 1:
				preciohdd = 155000;
				strcpy(discod,"1 TB 7200 RPM 64B TOSHIBA");
				strcpy(mardiscod,"TOSHIBA");
				fflush(stdin);
				system("cls");
				break;
			case 2:
				preciohdd = 200000;
				strcpy(discod,"2 TB 7200 RPM TOSHIBA");
				strcpy(mardiscod,"TOSHIBA");
				fflush(stdin);
				system("cls");
				break;
			case 3:
				preciohdd = 260000;
				strcpy(discod,"3 TB 7200 RPM TOSHIBA");
				strcpy(mardiscod,"TOSHIBA");
				fflush(stdin);
				system("cls");
				break;
		}
		}while((hdd<1) or (hdd>3));
}
void torre :: tarjetama(){  //Funcion para comprar tarjeta madre
	precioboard=0;
	do{
		cout<<"\tAñadir tarjetama Madre\t"<<endl;
	    cout<<"Digite la tarjetama madre  segun el numero\n";
	    cout<<"1. GIGABYTE H110M MH  | 198.000"<<endl;
	    cout<<"2. MSI H370 GAMING PRO CARBON 8 GEN  | 465.000"<<endl;
	    cout<<"3. MSI A320M PRO VH PLUS (AMD) | 210.000"<<endl;
	    cout<<"4. MSI B350 TOMAHAWK (AMD) | 340.000"<<endl;
	    cin>>board;
		switch(board){
			case 1:
				precioboard=198000;
				strcpy(tarjma,"GIGABYTE H110M MH");
				strcpy(martarjam,"GIGABYTE");
				fflush(stdin);
				system("cls");
				break;
			case 2:
				precioboard=465000;
				strcpy(tarjma,"MSI H370 GAMING PRO CARBON 8 GEN");
				strcpy(martarjam,"MSI");
				fflush(stdin);			
				system("cls");
				break;
			case 3:
				precioboard=210000;
				strcpy(tarjma,"MSI A320M PRO VH PLUS (AMD)");
				strcpy(martarjam,"MSI");
				fflush(stdin);				
				system("cls");
				break;
			case 4:
				precioboard=340000;
				strcpy(tarjma,"MSI B350 TOMAHAWK (AMD)");
				strcpy(martarjam,"MSI");
				fflush(stdin);				
				system("cls");				
		}
		}while((board<1) or (board>4));
}
void torre :: ver(){  //Muestra los componentes en el programa
	fflush(stdin);
	cout<<"Computador De Escritorio"<<endl;
	cout<<"	_________________________________________________________"<<endl;
	cout<<"	|     LOS COMPONENTES DE SU COMPUTADOR SON:              |"<<endl;
	cout<<"	|Procesador: "<<proc<<endl;
	cout<<"	|Memoria: "<<mem<<endl;
	cout<<"	|Disco Duro: "<<discod<<endl;
	cout<<"	|Targeta Madre: "<<tarjma<<endl;
}

class perifericos:public tipo{ 
	protected:
	int pantalla, impresora, parlante;
	long preciopant, precioimpre, precioparla;
	char marpan[50], marimpre[50], marpar[50];
	char pan[50], impre[50], par[50];
	public:
		void impresoras();
		void parlantes();
		void monitor();
		void mostrar();
};

void perifericos :: monitor(){ //Funcion para comprar monitor
	preciopant=0;
	do{
		cout<<"\tAñadir Monitor\t"<<endl;
        cout<<"Digite el monitor segun el numero\n";
	    cout<<"1. LG 20 1440X900 HDMI VGA IPS | 295.000"<<endl;
	    cout<<"2. SAMUSNG 22 PLS 1920X1080 HDMI | 390.000"<<endl;
	    cout<<"3. SAMSUNG 27 144 HZ CURVO | 1.060.000"<<endl;
		cout<<"4. LG 34 IPSGAMING 144 HZ | 2.090.000"<<endl;
		cin>>pantalla;
		switch(pantalla){
			case 1:
				preciopant=295000;
				strcpy(pan, "LG 20 1440X900 HDMI VGA IPS");	
				strcpy(marpan,"LG");			
				system("cls");
				break;
			case 2:
				strcpy(pan, "SAMUSNG 22 PLS 1920X1080 HDMI");
				strcpy(marpan,"SAMUSNG");
				preciopant=390000;				
				system("cls");
				break;
			case 3:
				preciopant=1060000;
				strcpy(pan, "SAMSUNG 27 144 HZ CURVO");
				strcpy(marpan,"SAMUSNG");
				system("cls");
				break;
			case 4:
				preciopant=2090000;
				strcpy(pan, "LG 34 IPSGAMING 144 HZ");
				strcpy(marpan,"LG");
				system("cls");
				break;	
		}
		}while((pantalla<1) or (pantalla>4));
}

void perifericos::impresoras(){ //Funcion para comprar impresora
	precioimpre=0;
	do{
		cout<<"\tAñadir Impresora\t"<<endl;
        cout<<"Digite la impresora segun el numero\n";
	    cout<<"1. Hp Multifunciónal Gt 5810 | 338.000"<<endl;
	    cout<<"2. Epson L380 Sistema Ecotank | 399.000"<<endl;
	    cout<<"3. Multifuncional Epson L380 | 421.000"<<endl;
		cout<<"4. Epson Cargacontinua Multifuncional L396 Wifi | 550.000"<<endl;
		cin>>impresora;
		switch(impresora){
			case 1:
				precioimpre=338000;
				strcpy(impre, "Hp Multifunciónal Gt 5810");
				strcpy(marimpre,"Hp");				
				system("cls");
				break;
			case 2:
				strcpy(impre, "Epson L380 Sistema Ecotank");
				strcpy(marimpre,"Epson");
				precioimpre=399000;				
				system("cls");
				break;
			case 3:
				precioimpre=421000;
				strcpy(impre, "Multifuncional Epson L380");
				strcpy(marimpre,"Epson");
				system("cls");
				break;
			case 4:
				precioimpre=550000;
				strcpy(impre, "Epson Carcont Multi L396 Wifi");
				strcpy(marimpre,"Epson");
				system("cls");
				break;	
		}
		}while((impresora<1) or (impresora>4));
}

void perifericos::parlantes(){  //Funcion para comprar parlantes
	precioparla=0;
	do{
		cout<<"\tAñadir Parlantes\t"<<endl;
        cout<<"Digite los parlantes segun el numero\n";
	    cout<<"1. Parlantes Genius Sp-U120 | 27.900"<<endl;
	    cout<<"2. Compacto Estéreo M-11 | 32.900"<<endl;
	    cout<<"3. LOGITECH Z313 2.1 50W 25RMS | 84.000"<<endl;
		cin>>parlante;
		switch(parlante){
			case 1:
				precioparla=27900;
				strcpy(par, "Parlantes Genius Sp-U120");
				strcpy(marpar,"Genius");				
				system("cls");
				break;
			case 2:
				strcpy(par, "Compacto Estéreo M-11");
				strcpy(marpar,"Esterio");
				precioparla=32900;				
				system("cls");
				break;
			case 3:
				precioparla=84000;
				strcpy(par, "LOGITECH Z313 2.1 50W 25RMS");
				strcpy(marpar,"LOGITECH");
				system("cls");
				break;	
		}
		}while((parlante<1) or (parlante>3));
}

void perifericos::mostrar(){ //Muestra los perifericos en el programa
	fflush(stdin);
	cout<<"	|Impresora: "<<impre<<endl;
	cout<<"	|Parlantes: "<<par<<endl;
	cout<<"	|Monitor: "<<pan<<endl;
	cout<<"	_________________________________________________________"<<endl;
}
////////////////////////////////////////////////////////////////////////////////////
class computador:public torre,public perifericos{
	char nombre[50],id[20];
	long final;
	int tipo_de_compu;
	public:
		void invfun();
		void calcular();
		void imprimir();
		void mostrarpo();
		void calcularpo();
		void imprimirpo();
};

void computador::invfun(){  //Datos del comprador
	cout<<"Por favor digite su nombre y apellido"<<endl;
	gets(nombre);gets(nombre);
	cout<<"Por favor digite su identificaion"<<endl;
	gets(id);
	do{     //Decide si el comptador es portatil o de escritorio
	cout<<"	|El computador que desea comprar es:"<<endl;
	cout<<"	  1. Escritorio"<<endl;
	cout<<"	  2. Portatil"<<endl;
	cin>>tipo_de_compu;
    }while ((tipo_de_compu!=1) && (tipo_de_compu!=2));
    cout<<"class 1 "<<tipo_de_compu<<endl;
	if (tipo_de_compu==1){         //Invoca funciones para
		proce();                   //Computador de escritorio
		memram();
		disco();
		tarjetama();
		monitor();
		impresoras();
		parlantes();
		ver();
		mostrar();
		calcular();
		imprimir();
	}
	else if (tipo_de_compu==2){ //Invoca funciones para
		portatiles();           //Computador portatil
		impresoras();
		parlantes();
		mostrarpo();
		calcularpo();
		imprimirpo();
	}
}


void computador :: calcular(){ //Calcula el precio total del computador de escritorio
	final = preciopro + preciomem + preciohdd + precioboard + preciopant + precioimpre + precioparla;
}

void computador::calcularpo(){  //Calcula el precio total del computador portatil
	final = precioportatil + precioimpre + precioparla;
}

void computador::mostrarpo(){  //Muestra los perifericos y el portatil en el programa
	cout<<"Computador Portatil"<<endl;
	cout<<"	_________________________________________________________"<<endl;
	cout<<"	|     LOS COMPONENTES DE SU COMPUTADOR SON:              |"<<endl;
	cout<<"	|Portatil: "<<port<<endl;
	cout<<"	|Impresora: "<<impre<<endl;
	cout<<"	|Parlantes: "<<par<<endl;
	cout<<"	|________________________________________________________"<<endl;
}

void computador :: imprimir(){
	cout<<endl<<"	El precio total de su computador es: "<<final<<endl;
	cout<<"	_________________________________________________________"<<endl;
	
	if(final <= 1714000){  //Crea archivo de cotizacion de bajo costo
		ofstream min("Bajo Costo.txt",std::fstream::app);
		min<<"\tPrecios basados de la tienda:   MR. PC Stores S.A.S\t"<<endl;
		min<<"_______________________________________________________________________________"<<endl;
		min<<"|               COTIZACION                  |        FECHA: 24/05/2018        |  "<<endl;
		min<<"|___________________________________________|_________________________________|"<<endl;
		min<<"|    NIT      |          TELEFONO           |              CIUDAD             |"<<endl;
		min<<"| 1056974582  |         3105650594          |         BOGOTA-COLOMBIA         |"<<endl;
		min<<"|_____________|_____________________________|_________________________________|"<<endl;
		min<<"|               DIRECCION                   |               EMAIL             |"<<endl;
		min<<"|   Carrera 15 N 78-33 Local 2-224          |          info@mrpc.com.co       |"<<endl;
		min<<"|___________________________________________|_________________________________|"<<endl;
		min<<"|                                CLIENTE:                                     |"<<endl;
		min<<"|       Nombre            |   "<<nombre<<endl;
		min<<"|       Identificacion    |   "<<id<<endl;
		min<<"|_____________________________________________________________________________|"<<endl;
		min<<"|ITEM|DESCRIPCION |MARCA   |MOMBRE                      |PRECIO               |"<<endl;
		min<<"|____|____________|________|____________________________|_____________________|"<<endl;
		min<<"| 1  |Procesador  |"<<marpro<<"   | "<<proc<<"          |$ "<<preciopro<<"             |"<<endl;
		min<<"|____|____________|________|____________________________|_____________________|"<<endl;
		min<<"| 2  |Memoria     |"<<marmen<<"    | "<<mem<<"             |$ "<<preciomem<<"             |"<<endl;
		min<<"|____|____________|________|____________________________|_____________________|"<<endl;
		min<<"| 3  |Disco Duro  |"<<mardiscod<<" | "<<discod<<"  |$ "<<preciohdd<<"             |"<<endl;
		min<<"|____|____________|________|____________________________|_____________________|"<<endl;
		min<<"| 4  |Tarj. Madre |"<<martarjam<<"| "<<tarjma<<"          |$ "<<precioboard<<"             |"<<endl;
		min<<"|____|____________|________|____________________________|_____________________|"<<endl;
		min<<"| 5  |Monitor     |"<<marpan<<"      | "<<pan<<"|$ "<<preciopant<<"             |"<<endl;
		min<<"|____|____________|________|____________________________|_____________________|"<<endl;
		min<<"| 6  |Impresora   |"<<marimpre<<"      | "<<impre<<"  |$ "<<precioimpre<<"             |"<<endl;
		min<<"|____|____________|________|____________________________|_____________________|"<<endl;
		min<<"| 7  |Parlantes   |"<<marpar<<"  | "<<par<<"   |$ "<<precioparla<<"              |"<<endl;
		min<<"|____|____________|________|____________________________|_____________________|"<<endl;
		min<<"|                                          | GRAN TOTAL |$ "<<final<<"            |"<<endl;
		min<<"|__________________________________________|____________|_____________________|"<<endl;
		min.close();
	}
	if(final > 1714000){  //Crea archivo de cotizacion de alto costo
		ofstream max("Alto Costo.txt",std::fstream::app);
		max<<"\tPrecios basados de la tienda:   MR. PC Stores S.A.S\t"<<endl;
		max<<"_______________________________________________________________________________"<<endl;
		max<<"|               COTIZACION                  |        FECHA: 24/05/2018        |  "<<endl;
		max<<"|___________________________________________|_________________________________|"<<endl;
		max<<"|    NIT      |          TELEFONO           |              CIUDAD             |"<<endl;
		max<<"| 1056974582  |         3105650594          |         BOGOTA-COLOMBIA         |"<<endl;
		max<<"|_____________|_____________________________|_________________________________|"<<endl;
		max<<"|               DIRECCION                   |               EMAIL             |"<<endl;
		max<<"|   Carrera 15 N 78-33 Local 2-224          |          info@mrpc.com.co       |"<<endl;
		max<<"|___________________________________________|_________________________________|"<<endl;
		max<<"|                                CLIENTE:                                     |"<<endl;
		max<<"|       Nombre            |   "<<nombre<<endl;
		max<<"|       Identificacion    |   "<<id<<endl;
		max<<"|_____________________________________________________________________________|"<<endl;
		max<<"|ITEM|DESCRIPCION |MARCA   |MOMBRE                      |PRECIO               |"<<endl;
		max<<"|____|____________|________|____________________________|_____________________|"<<endl;
		max<<"| 1  |Procesador  |"<<marpro<<"   | "<<proc<<"          |$ "<<preciopro<<"             |"<<endl;
		max<<"|____|____________|________|____________________________|_____________________|"<<endl;
		max<<"| 2  |Memoria     |"<<marmen<<"    | "<<mem<<"             |$ "<<preciomem<<"             |"<<endl;
		max<<"|____|____________|________|____________________________|_____________________|"<<endl;
		max<<"| 3  |Disco Duro  |"<<mardiscod<<" | "<<discod<<"  |$ "<<preciohdd<<"             |"<<endl;
		max<<"|____|____________|________|____________________________|_____________________|"<<endl;
		max<<"| 4  |Tarj. Madre |"<<martarjam<<"| "<<tarjma<<"          |$ "<<precioboard<<"             |"<<endl;
		max<<"|____|____________|________|____________________________|_____________________|"<<endl;
		max<<"| 5  |Monitor     |"<<marpan<<"      | "<<pan<<"|$ "<<preciopant<<"             |"<<endl;
		max<<"|____|____________|________|____________________________|_____________________|"<<endl;
		max<<"| 6  |Impresora   |"<<marimpre<<"      | "<<impre<<"  |$ "<<precioimpre<<"             |"<<endl;
		max<<"|____|____________|________|____________________________|_____________________|"<<endl;
		max<<"| 7  |Parlantes   |"<<marpar<<"  | "<<par<<"   |$ "<<precioparla<<"             |"<<endl;
		max<<"|____|____________|________|____________________________|_____________________|"<<endl;
		max<<"|                                          | GRAN TOTAL |$ "<<final<<"            |"<<endl;
		max<<"|__________________________________________|____________|_____________________|"<<endl;
		max.close();
	}
}

void computador::imprimirpo(){  //Crea archivo de cotizacion del portatil
	ofstream mov("Portatil.txt",std::fstream::app);
		mov<<"\tPrecios basados de la tienda:   MR. PC Stores S.A.S\t"<<endl;
		mov<<"_______________________________________________________________________________"<<endl;
		mov<<"|               COTIZACION                  |        FECHA: 24/05/2018        |  "<<endl;
		mov<<"|___________________________________________|_________________________________|"<<endl;
		mov<<"|    NIT      |          TELEFONO           |              CIUDAD             |"<<endl;
		mov<<"| 1056974582  |         3105650594          |         BOGOTA-COLOMBIA         |"<<endl;
		mov<<"|_____________|_____________________________|_________________________________|"<<endl;
		mov<<"|               DIRECCION                   |               EMAIL             |"<<endl;
		mov<<"|   Carrera 15 N 78-33 Local 2-224          |          info@mrpc.com.co       |"<<endl;
		mov<<"|___________________________________________|_________________________________|"<<endl;
		mov<<"|                                CLIENTE:                                     |"<<endl;
		mov<<"|       Nombre            |   "<<nombre<<endl;
		mov<<"|       Identificacion    |   "<<id<<endl;
		mov<<"|_____________________________________________________________________________|"<<endl;
		mov<<"|ITEM|DESCRIPCION |MARCA   |MOMBRE                      |PRECIO               |"<<endl;
		mov<<"|____|____________|________|____________________________|_____________________|"<<endl;
		mov<<"| 1  |Portatil    |"<<marport<<"   | "<<port<<"          |$ "<<precioportatil<<"             |"<<endl;
		mov<<"|____|____________|________|____________________________|_____________________|"<<endl;
		mov<<"| 2  |Impresora   |"<<marimpre<<"      | "<<impre<<"  |$ "<<precioimpre<<"             |"<<endl;
		mov<<"|____|____________|________|____________________________|_____________________|"<<endl;
		mov<<"| 3  |Parlantes   |"<<marpar<<"  | "<<par<<"   |$ "<<precioparla<<"              |"<<endl;
		mov<<"|____|____________|________|____________________________|_____________________|"<<endl;
		mov<<"|                                          | GRAN TOTAL |$ "<<final<<"            |"<<endl;
		mov<<"|__________________________________________|____________|_____________________|"<<endl;
		mov.close();
}

int main(){
	system ("color 74" );
	torre t;
	computador c;
	int sw=0;
	do{
	t.tipoc();
	cin>>sw;
	switch (sw){
		case 1:
	c.invfun();
	break;
		case 2: break; 
	}
	}while(sw!=2);
	return 0;
}

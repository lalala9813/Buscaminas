#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <conio.h>

using namespace std;
//FUNCION QUE NOS DA EL MENU DEL JUEGO
void intro()
{
    system("TITLE Buscaminas");
    int posFil=10;
    char marco[30][40];
    for(int i=0;i<30;i++)
    {
        for(int j=0;j<40;j++)
        {

            marco[posFil][12]='B';
            marco[posFil][13]='U';
            marco[posFil][14]='S';
            marco[posFil][15]='C';
            marco[posFil][16]='A';
            marco[posFil][17]=' ';
            marco[posFil][18]='M';
            marco[posFil][19]='I';
            marco[posFil][20]='N';
            marco[posFil][21]='A';
            marco[posFil][22]='S';

            marco[posFil+2][8]='I';
            marco[posFil+2][9]='N';
            marco[posFil+2][10]='T';
            marco[posFil+2][11]='E';
            marco[posFil+2][12]='G';
            marco[posFil+2][13]='R';
            marco[posFil+2][14]='A';
            marco[posFil+2][15]='N';
            marco[posFil+2][16]='T';
            marco[posFil+2][17]='E';
            marco[posFil+2][18]='S';
            marco[posFil+2][19]=':';

            marco[posFil+4][8]='-';
            marco[posFil+4][9]='G';
            marco[posFil+4][10]='U';
            marco[posFil+4][11]='I';
            marco[posFil+4][12]='D';
            marco[posFil+4][13]='O';
            marco[posFil+4][14]=' ';
            marco[posFil+4][15]='T';
            marco[posFil+4][16]='A';
            marco[posFil+4][17]='P';
            marco[posFil+4][18]='I';
            marco[posFil+4][19]='A';

            marco[posFil+5][8]='-';
            marco[posFil+5][9]='S';
            marco[posFil+5][10]='A';
            marco[posFil+5][11]='N';
            marco[posFil+5][12]='D';
            marco[posFil+5][13]='R';
            marco[posFil+5][14]='O';
            marco[posFil+5][15]=' ';
            marco[posFil+5][16]='C';
            marco[posFil+5][17]='A';
            marco[posFil+5][18]='C';
            marco[posFil+5][19]='E';
            marco[posFil+5][20]='R';
            marco[posFil+5][21]='E';
            marco[posFil+5][22]='S';

            marco[posFil+6][8]='-';
            marco[posFil+6][9]='R';
            marco[posFil+6][10]='E';
            marco[posFil+6][11]='N';
            marco[posFil+6][12]='Z';
            marco[posFil+6][13]='O';
            marco[posFil+6][14]=' ';
            marco[posFil+6][15]='G';
            marco[posFil+6][16]='O';
            marco[posFil+6][17]='N';
            marco[posFil+6][18]='Z';
            marco[posFil+6][19]='A';
            marco[posFil+6][20]='L';
            marco[posFil+6][21]='E';
            marco[posFil+6][22]='S';

            marco[posFil+8][6]='P';
            marco[posFil+8][7]='R';
            marco[posFil+8][8]='E';
            marco[posFil+8][9]='C';
            marco[posFil+8][10]='I';
            marco[posFil+8][11]='O';
            marco[posFil+8][12]='N';
            marco[posFil+8][13]='E';
            marco[posFil+8][14]=' ';
            marco[posFil+8][15]='Z';
            marco[posFil+8][16]=' ';
            marco[posFil+8][17]='P';
            marco[posFil+8][18]='A';
            marco[posFil+8][19]='R';
            marco[posFil+8][20]='A';
            marco[posFil+8][21]=' ';
            marco[posFil+8][22]='C';
            marco[posFil+8][23]='O';
            marco[posFil+8][24]='N';
            marco[posFil+8][25]='T';
            marco[posFil+8][26]='I';
            marco[posFil+8][27]='N';
            marco[posFil+8][28]='U';
            marco[posFil+8][29]='A';
            marco[posFil+8][30]='R';

            if(i==0 || i==29)
            {
                marco[i][j]='=';
            }
            else
            {
                marco[i][j]=' ';
            }
            if(i!=0 && j==0)
            {
                marco[i][j]='*';
                if(i==29)
                {
                    marco[i][j]='=';
                }
            }
            if(i!=0 && j==39)
            {
                marco[i][j]='*';
                if(i==29)
                {
                    marco[i][j]='=';
                }
            }

        }
    }

    for(int i=0;i<30;i++)
    {
        for(int j=0;j<40;j++)
        {
            Sleep(5);
            cout << marco[i][j];
        }cout <<"\n";
    }

}
void inicializarMatriz(char**matriz,int filas,int columnas,int i=0){
    //Cuando el iterador sea igual a las filas, se detiene la funcion
    if(i==filas){
        return;
    }
    //Asigna N espacios de enteros a cada fila
    *(matriz+i)= new char[columnas];
    //Retorna la funcion con un valor mas en el iterador
    return inicializarMatriz(matriz,filas,columnas,i+1);
}

void inicializarMatriz2(int**matriz,int filas,int columnas,int i=0){
    //Cuando el iterador sea igual a las filas, se detiene la funcion
    if(i==filas){
        return;
    }
    //Asigna N espacios de enteros a cada fila
    *(matriz+i)= new int[columnas];
    //Retorna la funcion con un valor mas en el iterador
    return inicializarMatriz2(matriz,filas,columnas,i+1);
}



//Funcion que "limpia" la matriz y asigna a cada posicion de esta el valor de 0
void limpiarMatriz(char**matriz,int filas,int columnas,int i=0,int j=0){
    //EL momento en el que se llena una fila pasa a la siguiente
    if(j==columnas){
        j=0;
        //Retorna la funcion pero ahora trabaja en la siguiente fila
        return limpiarMatriz(matriz,filas,columnas,i+1,j);
    }
    //El momento en el que llena todas las columnas se detiene
    if(i==filas){
        return;
    }
    //El espacio al que apunta eo puntero que apunta a otro puntero se asigna con 0;
    *(*(matriz+i)+j)='#';
    //Retorna la funcion pero ahora trabaja en la siguiente posicion de la fila
    return limpiarMatriz(matriz,filas,columnas,i,j+1);
}


void printMatriz(char**matriz,int filas,int columnas,int x,int y,int i=0, int j=0){
    //Si se recorren todas las posiciones de una fila
    if(j==columnas){
        j=0;
        cout<<endl;
        //Se retorna la funcion trabajando en la siguiente fila
        return printMatriz(matriz,filas,columnas,x,y,i+1,j);
    }
    //Si se recorren todas las filas se detiene
    if(i==filas){
        return;
    }
    if (x==i && y==j){
        cout<<"@ ";
    }else{
        cout<<*(*(matriz+i)+j)<<" ";
    }
    //Retorna la funcion trabajando ahora con la siguiente posicion de la fila
    return printMatriz(matriz,filas,columnas,x,y,i,j+1);
}

void printMatriz2(int**matriz,int filas,int columnas,int i=0, int j=0){
    //Si se recorren todas las posiciones de una fila
    if(j==columnas){
        j=0;
        cout<<endl;
        //Se retorna la funcion trabajando en la siguiente fila
        return printMatriz2(matriz,filas,columnas,i+1,j);
    }
    //Si se recorren todas las filas se detiene
    if(i==filas){
        return;
    }
    if(*(*(matriz+i)+j)==-1){
        cout<<*(*(matriz+i)+j)<<" ";
    }
    else{
        cout<<*(*(matriz+i)+j)<<"  ";
    }
    //Retorna la funcion trabajando ahora con la siguiente posicion de la fila
    return printMatriz2(matriz,filas,columnas,i,j+1);
}

//funcion que rellena la matriz para poder crear el juego
void rellenarMatriz(int**matriz,int filas,int columnas,int minas){
    int mina=minas;
    int random;
	//se inicializa la matriz con puros 0s
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            *(*(matriz+i)+j)=0;
        }
    }
	//se insertan  aleatoriamente las posiciones de las bombas
    for(int i=0;i<minas;i++){
        int x;
        int y;
        do{
            x=rand()%filas;
            y=rand()%columnas;
        }while(*(*(matriz+x)+y)==-1);
        *(*(matriz+x)+y)=-1;
    }
	//se recorre la matriz y por cada mina que encuentram incrementa en 1 el valor de las casillas adyacentes
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            int xi=-1,yi=-1,xf=1,yf=1;
            if(i==0){
                xi=0;
            }else if(i==filas-1){
                xf=0;
            }
            if(j==0){
                yi=0;
            }else if(j==columnas-1){
                yf=0;
            }
            if(*(*(matriz+i)+j)==-1){//si encuentra una mina, suma uno a todas las casiillas adyacentes
                for(int x=xi;x<=xf;x++){
                    for(int y=yi;y<=yf;y++){
                        if(*(*(matriz+i+x)+j+y)!=-1){
                            *(*(matriz+i+x)+j+y)+=1;
                        }
                    }
                }
            }
        }
    }
}
//funcion con la cual si se hace click sobre una casilla con valor nulo,
//esta muestra todas las casillas adyacentes con valores nulos hasta que
//encuentre valores no nulos
void cero(int**matrizM,char**matrizD,int x,int y,int f,int c){
    *(*(matrizD+x)+y)='_';
    int xi=-1,yi=-1,xf=1,yf=1;
    if(x==0){
        xi=0;
    }else if(x==f-1){
        xf=0;
    }
    if(y==0){
        yi=0;
    }else if(y==c-1){
        yf=0;
    }
    for(int i=xi;i<=xf;i++){
        for(int j=yi;j<=yf;j++){
            if(*(*(matrizD+x+i)+y+j)=='#'){
                if(*(*(matrizM+x+i)+y+j)==0){
                    cero(matrizM,matrizD,x+i,y+j,f,c);
                }else{
                    *(*(matrizD+x+i)+y+j)='1';//*(*(matrizM+x+i)+y+j)+48;
                }
            }
        }
    }
}



//Funcion que desasigna los espacios asignados a las matrices para no gastar memoria
void borrarMatrices(char**matriz,int filas,int i=0){
    //Si ya se borraron todas las columnas
    if(i==filas){
        //Borra las filas
        delete []matriz;
        return;
    }
    //Borra cada columna
    delete [] matriz[i];
    //Retorna la funcion para borrar la siguiente columna
    return borrarMatrices(matriz,filas,i+1);
}

void borrarMatrices2(int**matriz,int filas,int i=0){
    //Si ya se borraron todas las columnas
    if(i==filas){
        //Borra las filas
        delete []matriz;
        return;
    }
    //Borra cada columna
    delete [] matriz[i];
    //Retorna la funcion para borrar la siguiente columna
    return borrarMatrices2(matriz,filas,i+1);
}
void gameOver(){
    cout<<"GAME OVER\n";
    Beep(523,150);
    Sleep(300);
    Beep(392,150);
    Sleep(300);
    Beep(329,300);
    Beep(440,200);
    Beep(493,200);
    Beep(440,200);
    Beep(415,300);
    Beep(466,300);
    Beep(415,300);
    Beep(329,150);
    Beep(293,150);
    Beep(329,1000);
}

//Funcion que comprueba a cada vuelta si todas las casillas que no contienen minas han sido
//reveladas para saber si se gano el juego
bool ezwin(int**matrizMain,char**matrizDisplay,int filas, int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(*(*(matrizMain+i)+j)!=-1 && *(*(matrizDisplay+i)+j)=='#'){
                return false;
				//si encuentra que al menos una casilla sin mina no ha sido revelada,
				//retorna falso
            }
        }
    }
	//si sale del for sin encontrar casillas sin descubrir, signifca que ganaste
    cout<<"Victoria"<<endl;
    Beep(523,300);
    Beep(784,300);
    Beep(659,300);
    Beep(523,300);
    Beep(784,300);
    Beep(659,300);
    Beep(523,300);
    Sleep(300);
    Beep(555,300);
    Beep(800,300);
    Beep(698,300);
    Beep(555,300);
    Beep(800,300);
    Beep(698,300);
    Beep(555,300);
    Sleep(200);
    Beep(603,300);
    Beep(832,300);
    Beep(784,300);
    Beep(603,300);
    Beep(832,300);
    Beep(784,300);
    Beep(603,300);
    Sleep(300);
    Beep(698,300);
    Beep(698,300);
    Beep(698,300);
    Beep(784,1500);
    return true;
}
int main(){
    intro();
    char v;
    v=getch();
    if(v=='z' || v=='Z')
    {
        system("cls");
        int filas,columnas,minas;
        cout<<"Con cuantas filas quiere jugar? ";
        cin>>filas;
        cout<<"Con cuantas columnas quiere jugar? ";
        cin>>columnas;
        minas=(filas*columnas)/10;
        int**matrizMain= new int*[filas];
        char**matrizDisplay=new char*[filas];
        inicializarMatriz2(matrizMain,filas,columnas);
        inicializarMatriz(matrizDisplay,filas,columnas);

        limpiarMatriz(matrizDisplay,filas,columnas);
        rellenarMatriz(matrizMain,filas,columnas,minas);


        //printMatriz2(matrizMain,filas,columnas);
        char c;
        int x=0,y=0;
        //printMatriz(matrizDisplay,filas,columnas,x,y);
        while(true){
            system("cls");

            printMatriz(matrizDisplay,filas,columnas,x,y);
            c=getch();
            if(c=='w'||c=='W'){//si presionas w aumenta en 1 la posicion del cursor en la x
                if(x>0){
                    x--;
                    Beep(350,100);
                }
                system("cls");
            }else if(c=='s'||c=='S'){//Si presionas s disminuye en uno la posicion del cursor en x
                if(x<filas-1){
                    x++;
                    Beep(450,100);
                }
                system("cls");
            }else if(c=='a'||c=='A'){//si presionas a disminuyes en 1 la posicion y
                if(y>0){
                    y--;
                    Beep(400,100);
                }
                system("cls");
            }else if(c=='d'||c=='D'){//si presionas a aumentas en 1 la posicion y
                if(y<columnas-1){
                    y++;
                    Beep(500,100);
                }
                system("cls");
            }else if(c=='k'||c=='K'){//Si presionas la k marcas una casilla como que contiene una bomba
                if(*(*(matrizDisplay+x)+y)=='#'){
                    *(*(matrizDisplay+x)+y)='X';
                }else if(*(*(matrizDisplay+x)+y)=='X'){
                    *(*(matrizDisplay+x)+y)='#';
                }
                system("cls");
            }
            if(c=='j'||c=='J'){//con J abres las casillas y revelas el numero de minas adyacentes  o la bomba
                if(*(*(matrizDisplay+x)+y)=='#'){
                    if(*(*(matrizMain+x)+y)==-1){//si haces click sobre una bomba el juego termina
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        system("cls");
                        Sleep(50);
                        printMatriz(matrizDisplay,filas,columnas,x,y);
                        gameOver();
                        break;
                    }else{
                        *(*(matrizDisplay+x)+y)=*(*(matrizMain+x)+y)+48;
                        if(*(*(matrizMain+x)+y)==0){//sino revela todas las posicones con 0 adyacentes a esa casilla
                            cero(matrizMain,matrizDisplay,x,y,filas,columnas);
                        }
                        //cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        system("cls");
                        Sleep(50);
                        printMatriz(matrizDisplay,filas,columnas,x,y);
                    }
                }

            }else{
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                system("cls");
                Sleep(50);
                printMatriz(matrizDisplay,filas,columnas,x,y);
            }
            //condicional que determina o no la victoria del jugador
            if(ezwin(matrizMain,matrizDisplay,filas,columnas)){

                break;
            }
        //system("cls");
        }
        //Se borran las matrices para liberar el espacio de memoria
        borrarMatrices(matrizDisplay,filas);
        borrarMatrices2(matrizMain,filas);
    }

    return 0;
}


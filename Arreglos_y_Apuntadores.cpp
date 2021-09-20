#include <iostream>
using namespace std;



int minimo (int *a, int n); //encabezado de la funcion

int main(){

int arreglo[4];
int tabla[10];

//--------------------------Ejemplo arreglo-------------------

/* for(int i=0; i<=4;i++){

    printf("Ingresar numero:");
    scanf("%d",&arreglo[i]);
};

for(int i=0; i<=4;i++){

    printf("El numero es: %d \n",arreglo[i]);
}; */

//--------------------------Ejemplo de apuntadores 1-------------------


int a; //variable que ya tiene una direccion de memoria asignada
int *b; //solo es una etiqueta que no tiene asignada una direccion de memoria

//tambien podria declararse el apuntador como: int *b = &a lo cual se interpreta como una etiqueta int *b a la que se le asignara la direccion de memoeria que apunta a la variable a

b = &a; //se le asigna la direccion de memeoria de a, entonces todo lo que se escriba en a, estara en b.
        //Al ocupar el apuntador en codigo ya no es necesario ponerle el *, almenos que queramos accesar al contenido de esa direccion de memoria con *b

a = 100;

printf("a=%d , b=%d , dir=%X ,dir=%X \n",a,*b,b,&a);


//----------------------IMPORTANTE-----------

// & y * son operaciones inversas de apuntadores. El primero signica que da la direccion de la variable en lugar de su contenido.
// El segundo da el contenido de una celda de un apuntador.


//-----------------RESUMIENDO LO ANTERIOR----
// int *b : cuando se pone *b con el tipo de dato, en este caso int, esto es una etiqueta.
// *b: se accesa al contenido de la variable, primero se tiene que incializar como: int *b = &a , sino estara apuntando a nulo
// b = &a : se le asigna al apuntador b,la direccion de memoeria de a



//--------------------------Ejemplo de apuntadores 2-------------------


 /* cout << "Introduzca 10 enteros: \n";

for (int i=0; i<10 ; i++){
    cin>>tabla[i];
   };

   cout<<"\n el valor minimo es "<<minimo(tabla,10)<<endl;   //Tabla aqui ya no es un arreglo, es un apuntador que apunta al primer slot del arreglo, es decir tabla[0] */
return 0;
}

/*
int minimo (int *a, int n)  //practicamente si se tiene *x es ver a las variables desde la perspectiva de los apuntadores.
    { int menor;
        menor=*a;
        for (int i=1;i<n;i++){
            if (*(a+i)<menor) menor=*(a+i);
        };
      return menor;
} */

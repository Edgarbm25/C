#include <stdio.h>
#include <cstring>

//Define a new type of variable
//La estrctura es el precursor de la clase
struct STUDENT{

   char name[100];
   float calf;
   int edad;

};


void fillData(STUDENT &s){ //aqui recibe una direccion de memoeria asociada a una variable, recibe el apuntador y apartir de este modifica la varibale

    s.calf=9.8;
    s.edad=20;
    strcpy(s.name,"Fulanito de Tall");

}


void fillData(STUDENT *s){ //aqui recibe un apuntador, con el * te permite accesar al contenido para llenar cada una de las variables
    s->calf=5.8;
    s->edad=20;
    strcpy(s->name,"Fulanito de Tall 2");

}

void printData(STUDENT s){ // aqui hace una copia, no recibe la direccion de memoria como tal
    printf("Name=%s\n",s.name);
    printf("Edad=%d\n",s.edad);
    printf("Calif=%f\n",s.calf);


}


int main()
{



    STUDENT st1; //dt1 es una variable de tipo student
    fillData(st1); //lo ppone en cursiva porque lo va a modificar
    printData(st1); //este no va a modificar la variable solo recibe los datos por eso no lo pone en cursiva

    //en fillData se modifican los valores desde la direccion de memeoria, y ya al tenerlos, se hace una copia de ellos a printData para que los imprima


    STUDENT *st1_p = nullptr; //aqui es una etiqueta que no apunta a ningun lado
    st1_p = new STUDENT; // le crea el cuerpo al apuntador

    fillData(st1_p);
    printData(*st1_p);

    delete st1_p; //Destruye el cuerpo


    STUDENT *st1_pV = nullptr;
    st1_pV = new STUDENT[10];
    fillData(st1_pV+0);
    fillData(st1_pV+1); //este +1 en realidad son 10008 bytes que es el tamaño en conjunto de todas las variables del arreglo, estop es equivalente a  st1_pV[1]

    //Estos dos son equivalentes.
    printData(*st1_pV);
    printData(*(st1_pV+1));

    printData(st1_pV[0]);
    printData(st1_pV[1]);

    delete [] st1_pV; //Destruye el cuerpo

    /*STUDENT var;
    var=st1;
    printData(var); */



    return 0;
}

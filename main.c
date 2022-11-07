#include <stdio.h>
#include <stdlib.h>
#include "libreriaConjunta.h"



int main()
{
    /// inicio del setup

    srand(time(NULL)); ///Declara el seed para el rand
    Heroe jugador;
    cargaUsuario(&jugador);
    nodoArbol*mapa=inicArbol();
    mapa=cargaMapa(mapa);

    ///fin del setup

    int fin=0; //0=no se completo mazmorra, 1=se completo mazmorra
    int aux=0;
MENU:
    while(fin==0)
    {
        /*printf("-----------------------------------------------------\n");
        printf("|                                                   |\n");
        printf("|                   nombre del juego :p             |\n");
        printf("|                                                   |\n");
        printf("-----------------------------------------------------\n");
        printf("|           ____________________________            |\n");
        printf("|           |           menu           |            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|           |1        avanzar         1|            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|           |2       retroceder       2|            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|           |3    abrir inventario    3|            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|           |4    guardar y salir     4|            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|                                                   |\n");
        printf("-----------------------------------------------------\n");*/

        printf("1: avanzar");
        scanf("%d", &aux);
        if(aux>4)
        {
            printf("solo tienes 4 opciones, elija de vuelta\n");
            Sleep(2300);
            system("cls");
            goto MENU;
        }
        switch(aux)
        {
        case 1:
            //movimiento izquierda derecha
            switch(aux)
            {
                printf("desea ir a la izquierda o la derecha?");
                printf("1: izquierda\t2: derecha");
            case 1:
                system("cls");
                printf("nuestro heroe avanza por la izquierda");
                Sleep(2300);
                system("cls");
                avanzarIzquierda(mapa,jugador.habitacionActual,&jugador);
                break;
            case 2:
                system("cls");
                printf("nuestro heroe avanza por la derecha");
                heroeVaDerecha();
                Sleep(2300);
                system("cls");
                avanzarDerecha(mapa,jugador.habitacionActual,&jugador);
                system("cls");
                break;

            }
        //movimiento izquierda derecha
        case 2:
            if(jugador.habitacionActual==4)
            {
                printf("cuando nuestro heroe intenta salir del castillo, se percata de que las puertas estan cerradas\n");
                Sleep(2300);
                system("cls");
            }
            else
            {
                printf ("el heroe vuelve a la habitacion anterior");
                jugador=retroceso(jugador, mapa);
                Sleep(2300);
                system("cls");
            }
            break;
        case 3:
            {
                printf ("inventario: ");
                verinventario(inventario);

                printf ("desea ");

            }break;
        case 4:
            //guarda lista de arboles el estado actual del mapa bajo el nombre del heroe

            break;
        }

    }//fin del bucle*/

        printf("-----------------------------------------------------\n");
        printf("|                                                   |\n");
        printf("|                   nombre del juego :p             |\n");
        printf("|                                                   |\n");
        printf("-----------------------------------------------------\n");
        printf("|           ____________________________            |\n");
        printf("|           |           MENU           |            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|           |1        AVANZAR         1|            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|           |2       RETROCEDER       2|            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|           |3    ABRIR INVENTARIO    3|            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|           |4    GUARDAR Y SALIR     4|            |\n");
        printf("|           |--------------------------|            |\n");
        printf("|                                                   |\n");
        printf("-----------------------------------------------------\n");


        //cargando();
        heroeVaIzquiera();

            int habitacionActual=4, habitacionIzq=6;
    int habitacionDer=2;

    /*printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |       ____       |         |        |\n");
    printf("|      |         |      |    |      |         |        |\n");
    printf("|      |         |      |____|      |         |        |\n");
    printf("|      |         |         |        |         |        |\n");
    printf("|      |         |       __|__      |         |        |\n");
    printf("|      |         |         |        |         |        |\n");
    printf("|      |         |        / \\       |         |        |\n");
    printf("|______|_________|_______/___\\_____ |_________|________|\n");

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |             ____ |         |        |\n");
    printf("|      |         |            |    ||         |        |\n");
    printf("|      |         |            |____||         |        |\n");
    printf("|      |         |               |  |         |        |\n");
    printf("|      |         |             __|__|         |        |\n");
    printf("|      |         |               |  |         |        |\n");
    printf("|      |         |              / \\ |         |        |\n");
    printf("|______|_________|_____________/___\\__________|________|\n");

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |                  |   ____  |        |\n");
    printf("|      |         |                  |  |    | |        |\n");
    printf("|      |         |                  |  |____| |        |\n");
    printf("|      |         |                  |     |   |        |\n");
    printf("|      |         |                  |   __|__ |        |\n");
    printf("|      |         |                  |     |   |        |\n");
    printf("|      |         |                  |    / \\  |        |\n");
    printf("|______|_________|__________________|___/___\\_|________|\n");*/


    ///habitacion cofre



    return 0;
}


void cargando ()
{
    int num=10;

    while (100>num)
    {
        printf(" ______________________________________________________\n");
        printf("|                                                      |\n");
        printf("|                              .                       |\n");
        printf("|                   cargando %i ..                     |\n", num);
        printf("|                                                      |\n");
        printf("|                                                      |\n");
        printf("|______________________________________________________|\n");

        system("cls");

        num=num+5;

        printf(" ______________________________________________________\n");
        printf("|                                                      |\n");
        printf("|                               .                      |\n");
        printf("|                   cargando %i. .                     |\n", num);
        printf("|                                                      |\n");
        printf("|                                                      |\n");
        printf("|______________________________________________________|\n");

        system("cls");

        num=num+5;

        printf(" ______________________________________________________\n");
        printf("|                                                      |\n");
        printf("|                                .                     |\n");
        printf("|                   cargando %i..                      |\n", num);
        printf("|                                                      |\n");
        printf("|                                                      |\n");
        printf("|______________________________________________________|\n");

        system("cls");

        num=num+5;
    }
}

void heroeVaDerecha()
{
    int habitacionActual=4, habitacionIzq=6;
    int habitacionDer=2;

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |       ____       |         |        |\n");
    printf("|      |         |      |    |      |         |        |\n");
    printf("|      |         |      |____|      |         |        |\n");
    printf("|      |         |         |        |         |        |\n");
    printf("|      |         |       __|__      |         |        |\n");
    printf("|      |         |         |        |         |        |\n");
    printf("|      |         |        / \\       |         |        |\n");
    printf("|______|_________|_______/___\\_____ |_________|________|\n");

    system("cls");

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |       ____       |         |        |\n");
    printf("|      |         |      |    |      |         |        |\n");
    printf("|      |         |      |____|      |         |        |\n");
    printf("|      |         |         |        |         |        |\n");
    printf("|      |         |       __|__      |         |        |\n");
    printf("|      |         |         |        |         |        |\n");
    printf("|      |         |        / \\       |         |        |\n");
    printf("|______|_________|_______/___\\_____ |_________|________|\n");

    system("cls");

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |             ____ |         |        |\n");
    printf("|      |         |            |    ||         |        |\n");
    printf("|      |         |            |____||         |        |\n");
    printf("|      |         |               |  |         |        |\n");
    printf("|      |         |             __|__|         |        |\n");
    printf("|      |         |               |  |         |        |\n");
    printf("|      |         |              / \\ |         |        |\n");
    printf("|______|_________|_____________/___\\__________|________|\n");

    system("cls");

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |             ____ |         |        |\n");
    printf("|      |         |            |    ||         |        |\n");
    printf("|      |         |            |____||         |        |\n");
    printf("|      |         |               |  |         |        |\n");
    printf("|      |         |             __|__|         |        |\n");
    printf("|      |         |               |  |         |        |\n");
    printf("|      |         |              / \\ |         |        |\n");
    printf("|______|_________|_____________/___\\__________|________|\n");

    system("cls");

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |                  |   ____  |        |\n");
    printf("|      |         |                  |  |    | |        |\n");
    printf("|      |         |                  |  |____| |        |\n");
    printf("|      |         |                  |     |   |        |\n");
    printf("|      |         |                  |   __|__ |        |\n");
    printf("|      |         |                  |     |   |        |\n");
    printf("|      |         |                  |    / \\  |        |\n");
    printf("|______|_________|__________________|___/___\\_|________|\n");

    system("cls");

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |                  |   ____  |        |\n");
    printf("|      |         |                  |  |    | |        |\n");
    printf("|      |         |                  |  |____| |        |\n");
    printf("|      |         |                  |     |   |        |\n");
    printf("|      |         |                  |   __|__ |        |\n");
    printf("|      |         |                  |     |   |        |\n");
    printf("|      |         |                  |    / \\  |        |\n");
    printf("|______|_________|__________________|___/___\\_|________|\n");

    system("cls");
}

heroe * cambioDeHabitacionRetroceso (heroe jugadorA) ///reescribe jugador
{
    heroe jugador;

    jugador.armadura=jugadorA.armadura;
    jugador.atk=jugadorA.atk;
    jugador.cantidadCombates=jugadorA.cantidadCombates;

    nododoble* actual=jugadorA.habitacionActual;
    jugador.habitacionActual=jugadorA.habitacionAnterior;
    jugador.habitacionAnterior=jugadorA.habitacionActual;
    jugador.inventarioheroe=jugadorA.inventarioheroe;

    return jugador;
}
/*heroe * retroceso (heroe jugador, nodoarbol *mapa)
{
    if(arbol!=NULL)
    {
        if(arbol->numHabitacion==jugador.habitacionActual) ///actualiza los estados de donde se encuentra el heroe
        {
            arbol->estadoHeroe=0;
        }
        else if(arbol->numHabitacion==jugador.habitacionAnterior)
        {
            arbol->estadoHeroe=1;
            //jugador=cambioDeHabitacionRetroceso(jugador); ///reescribe el heroe pero solo sirve si es en archivos
            nododoble* actual=jugador.habitacionActual;
            jugador.habitacionActual=jugador.habitacionAnterior;
            jugador.habitacionAnterior=actual;

        }
        else
        {
            retroceso(jugador, arbol->izq);
            retroceso(jugador, arbol->der);
        }
    }

    return jugador;
}*/

///retroceso nueva

/*int buscarNodoHabitacion (nodoarbol *mapa, int habitacion)
{
    int nro;
    if(habitacion==mapa->nroHabitacion)
    {
        nro=mapa->nroHabitacion;
    }
    else if (habiacion>4)
    {
        nro=buscarNodoHabitacion (mapa->izq, habitacion);
    }
    else
    {
        nro=buscarNodoHabitacion(mapa->der, habitacion);
    }

    return nro;
}

int retroceso (int habitacionActual, nodoarbol *mapa)
{
    int habitacionAnterior;

    if (habitacionActual==4)
    {
        habitacionAnterior=buscarNodoHabitacion(mapa, habitacionActual);
    }
    else if (habitacionActual>4)
    {
        habitacionAnterior=buscarNodoHabitacion(mapa->der, habitacionActual);
    }
    else if (4>habitacionActual)
    {
        habitacionAnterior=buscarNodoHabitacion(mapa->izq, habitacionActual);
    }

    return habitacionAnterior;
}

///arreglo de arboles

int bsucarPosHeroe (celda ada[], int validos, char nombre)
{
    int i=0, rta=-1;

    while(validos>i && rta==-1)
    {
        if (strcmpi (ada[i].jugador.nombre, nombre)==0)
        {
            rta=i;
        }
        i++;
    }

    return rta;
}

int alta(celda ada[], int validos, heroe jugador)
{
    int validos;

    int pos=buscarPosHeroe(ada, validos, jugador.nombre);

    if(pos==-1)
    {
        validos=agregarHeroe(ada, validos, jugador);
        pos=validos-1;
    }

    ada[pos].mapaArbol=cargaMapa(ada[pos].mapaArbol);

    return validos;
}

int cargarCelda (celda ada[], int dimension, heroe jugador);
{
    int validos;

    while(dimension>validos)
    {
        validos=alta(ada, validos, jugador);
    }

    return validos;
}*/

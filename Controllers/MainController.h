#ifndef MAINCONTROLLER_H_INCLUDED
#define MAINCONTROLLER_H_INCLUDED
#include <algorithm>
#include <iostream>
#include "../CSYSTEM/csystem.h"          // Libreria para multiplataforma.
#include "../config.h"                   // Configuraciones del sistema.
#include "../Rules/MainRules.h"          // Reglas del main.

using namespace std;

namespace Main
{
/***********************
* Prototipos del Main. *
***********************/
void index();
void menu();
#include "ConfigurationController.h"    // Controlador de configuracion de freelancers.
#include "FreelancerController.h"       // Controlador de freelancers.
#include "SchedulerController.h"        // Controlador de tiempo de trrabajo.

void welcome()
{
    cout << endl;
    cout << Text_Center << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << Text_Center << "같                                                                    같" << endl;
    cout << Text_Center << "같         같같같 같같 같   같 같같�      같같같같�                   같" << endl;
    cout << Text_Center << "같           같    같  같� 같� 같        같 \\ | / 같                  같" << endl;
    cout << Text_Center << "같           같    같  같 � 같 같같�     같 _ � _ 같  Powered by      같" << endl;
    cout << Text_Center << "같           같    같  같   같 같        같   �   같  Magic Software  같" << endl;
    cout << Text_Center << "같           같   같같 같   같 같같�     같 / | \\ 같  S. A.           같" << endl;
    cout << Text_Center << "같                                        같같같같�                   같" << endl;
    cout << Text_Center << "같                                                                    같" << endl;
    cout << Text_Center << "같     같같� 같같� 같  같 같같� 같같�  같  같 같     같같� 같같같     같" << endl;
    cout << Text_Center << "같     같    같    같  같 같    같 같� 같  같 같     같    같  같     같" << endl;
    cout << Text_Center << "같     같같� 같    같같같 같같� 같  같 같  같 같     같같� 같같같     같" << endl;
    cout << Text_Center << "같        같 같    같  같 같    같 같� 같  같 같     같    같 같      같" << endl;
    cout << Text_Center << "같     같같� 같같� 같  같 같같� 같같�  같같같 같같같 같같� 같  같     같" << endl;
    cout << Text_Center << "같                                                                    같" << endl;
    cout << Text_Center << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;

    sys::msleep(2);

    loading();
}

void menu()
{
    sys::cls();
    cout << endl;
    cout << Text_Center << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << Text_Center << "같                                                                  같" << endl;
    cout << Text_Center << "같같                 M E N U   P R I N C I P A L                  같같" << endl;
    cout << Text_Center << "같                                                                  같" << endl;
    cout << Text_Center << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << Text_Center << "같                                                                  같" << endl;
    cout << Text_Center << "같                 1. Configuracion de precio/hora.                 같" << endl;
    cout << Text_Center << "같                 2. ABM de freelancers.                           같" << endl;
    cout << Text_Center << "같                 3. Carga de horas a los freelancers.             같" << endl;
    cout << Text_Center << "같                                                                  같" << endl;
    cout << Text_Center << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
}

void retry()
{
    menu();
    showErrorFooter();
    index();
}

void dispatch()
{
    if (entry[0] == '1') {
        //loading(25, 50);
        Configuration::menu();
        Configuration::index();
    }
    if (entry[0] == '2')
        cout << "asdw";

    if (entry[0] == '3')
        cout << "asd1";
}

void index()
{
    setCurrentDate();

    cout << Text_Center << "Seleccione una opcion para operar: ";
    cin >> entry;

    if (! MainRule::validEntry(maxOptionLength) || ! MainRule::validEntry(mainOptions))
    {
        retry();
    }

    dispatch();

    exit(0);
}
}

#endif // MAINCONTROLLER_H_INCLUDED

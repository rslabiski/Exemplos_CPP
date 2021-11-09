#include <iostream>
#include "Joystick.hpp"

void testeJoystick();

int main() {
    testeJoystick();
    return 0;
}

void testeJoystick() {
    Joystick joystick;
    int cont, x, y;
    bool z;

    joystick.Setup();

    cont = 0;

    cout << "Ande com WASD e Clique com Z:" << endl;
    while(cont < 10) {   
        if(_kbhit()) {
            cout << "X: ";
            x = joystick.eixoX();  
            if(x == -1)
                cout << "a ";
            else if(x == 1)
                cout << "d ";
            else
                cout << "  ";

            cout << "Y: ";
            y= joystick.eixoY(); 
            if(y == -1)
                cout << "w ";
            else if(y == 1)
                cout << "s ";
            else
                cout << "  ";

            cout << "Z: ";
            z = joystick.cliqueZ();
            if(z == true)
                cout << "Clicou";
            else
                cout << "Nao clicou";

            cout << endl;
            cont++;
        }
    }
}
#include "miniwin.h"

using namespace miniwin;


    int jugador1(int x, int y){

        color_rgb(255, 255, 255); // BLANCO
        rectangulo_lleno(18+x, 57+y, 20+x, 76+y);
        rectangulo_lleno(20+x, 53+y, 22+x, 57+y); rectangulo_lleno(20+x, 74+y, 22+x, 76+y);
        rectangulo_lleno(22+x, 52+y, 25+x, 53+y); rectangulo_lleno(22+x, 71+y, 25+x, 74+y);
        rectangulo_lleno(25+x, 50+y, 27+x, 52+y); rectangulo_lleno(25+x, 71+y, 27+x, 74+y);
        rectangulo_lleno(27+x, 48+y, 29+x, 50+y); rectangulo_lleno(27+x, 70+y, 29+x, 71 +y);
        rectangulo_lleno(29+x, 28+y, 31+x, 53+y); rectangulo_lleno(29+x, 70+y, 31+x, 71+y);
        rectangulo_lleno(31+x, 31+y, 34+x, 32+y); rectangulo_lleno(31+x, 67+y, 34+x, 71+y);
        rectangulo_lleno(34+x, 32+y, 35+x, 35+y); rectangulo_lleno(34+x, 67+y, 35+x, 70+y); rectangulo_lleno(34+x, 71+y, 35+x, 74+y);
        rectangulo_lleno(35+x, 35+y, 38+x, 50+y); rectangulo_lleno(35+x, 66+y, 38+x, 67+y); rectangulo_lleno(35+x, 74+y, 40+x, 76+y);
        rectangulo_lleno(38+x, 36+y, 40+x, 39+y); rectangulo_lleno(38+x, 66+y, 40+x, 67+y);
        rectangulo_lleno(40+x, 35+y, 42+x, 36+y); rectangulo_lleno(40+x, 63+y, 42+x, 76+y);
        rectangulo_lleno(42+x, 32+y, 45+x, 35+y); rectangulo_lleno(42+x, 63+y, 45+x, 66+y);
        rectangulo_lleno(45+x, 31+y, 47+x, 32+y); rectangulo_lleno(45+x, 60+y, 47+x, 66+y);
        rectangulo_lleno(47+x, 28+y, 48+x, 31+y); rectangulo_lleno(47+x, 60+y, 48+x, 63+y); rectangulo_lleno(47+x, 66+y, 48+x, 67+y);
        rectangulo_lleno(48+x, 27+y, 52+x, 28+y); rectangulo_lleno(48+x, 59+y, 52+x, 60+y); rectangulo_lleno(48+x, 67+y, 52+x, 70+y);
        rectangulo_lleno(52+x, 24+y, 53+x, 27+y); rectangulo_lleno(52+x, 59+y, 53+x, 60+y); rectangulo_lleno(52+x, 70+y, 53+x, 71+y);
        rectangulo_lleno(53+x, 24+y, 55+x, 27+y); rectangulo_lleno(53+x, 59+y, 55+x, 60+y); rectangulo_lleno(53+x, 70+y, 55+x, 71+y);
        rectangulo_lleno(55+x, 27+y, 57+x, 28+y); rectangulo_lleno(55+x, 59+y, 57+x, 60+y); rectangulo_lleno(55+x, 67+y, 57+x, 70+y);
        rectangulo_lleno(57+x, 28+y, 60+x, 31+y); rectangulo_lleno(57+x, 60+y, 60+x, 63+y); rectangulo_lleno(57+x, 66+y, 60+x, 67+y);
        rectangulo_lleno(60+x, 31+y, 62+x, 32+y); rectangulo_lleno(60+x, 60+y, 62+x, 66+y);
        rectangulo_lleno(62+x, 32+y, 64+x, 35+y); rectangulo_lleno(62+x, 63+y, 64+x, 66+y);
        rectangulo_lleno(64+x, 35+y, 66+x, 36+y); rectangulo_lleno(64+x, 63+y, 66+x, 76+y);
        rectangulo_lleno(66+x, 36+y, 69+x, 39+y); rectangulo_lleno(66+x, 66+y, 69+x, 67+y); rectangulo_lleno(66+x, 74+y, 70+x, 76+y);
        rectangulo_lleno(69+x, 35+y, 70+x, 50+y); rectangulo_lleno(69+x, 66+y, 70+x, 67+y); rectangulo_lleno(69+x, 74+y, 70+x, 76+y);
        rectangulo_lleno(70+x, 32+y, 73+x, 35+y); rectangulo_lleno(70+x, 67+y, 73+x, 70+y); rectangulo_lleno(70+x, 71+y, 73+x, 74+y);
        rectangulo_lleno(73+x, 31+y, 75+x, 32+y); rectangulo_lleno(73+x, 67+y, 75+x, 71+y);
        rectangulo_lleno(75+x, 28+y, 77+x, 53+y); rectangulo_lleno(75+x, 70+y, 77+x, 71+y);
        rectangulo_lleno(77+x, 48+y, 80+x, 50+y); rectangulo_lleno(77+x, 70+y, 80+x, 71+y);
        rectangulo_lleno(80+x, 50+y, 83+x, 53+y); rectangulo_lleno(80+x, 71+y, 82+x, 74+y);
        rectangulo_lleno(82+x, 71+y, 83+x, 75+y);
        rectangulo_lleno(83+x, 53+y, 87+x, 57+y); rectangulo_lleno(83+x, 74+y, 87+x, 76+y);
        rectangulo_lleno(87+x, 57+y, 89+x, 76+y);

        color_rgb(59, 93, 201); // AZUL CLARO
        rectangulo_lleno(31+x, 32+y, 34+x, 36+y);
        rectangulo_lleno(34+x, 35+y, 35+x, 39+y);
        rectangulo_lleno(45+x, 36+y, 47+x, 39+y); rectangulo_lleno(45+x, 48+y, 47+x, 50+y);
        rectangulo_lleno(47+x, 35+y, 48+x, 36+y); rectangulo_lleno(47+x, 45+y, 48+x, 48+y);
        rectangulo_lleno(48+x, 32+y, 52+x, 35+y); rectangulo_lleno(48+x, 43+y, 52+x, 45+y);
        rectangulo_lleno(52+x, 31+y, 53+x, 32+y); rectangulo_lleno(52+x, 41+y, 53+x, 43+y);
        rectangulo_lleno(57+x, 31+y, 60+x, 35+y); rectangulo_lleno(57+x, 48+y, 60+x, 60+y);
        rectangulo_lleno(60+x, 32+y, 62+x, 36+y); rectangulo_lleno(60+x, 50+y, 62+x, 60+y);
        rectangulo_lleno(62+x, 35+y, 64+x, 63+y);
        rectangulo_lleno(64+x, 36+y, 66+x, 63+y);
        rectangulo_lleno(66+x, 39+y, 69+x, 57+y); rectangulo_lleno(66+x, 59+y, 69+x, 66+y); rectangulo_lleno(66+x,70+y, 69+x, 74+y);
        rectangulo_lleno(69+x, 50+y, 70+x, 66+y); rectangulo_lleno(69+x, 70+y, 70+x, 74+y);
        rectangulo_lleno(70+x, 41+y, 73+x, 59+y); rectangulo_lleno(70+x, 60+y, 73+x, 67+y);
        rectangulo_lleno(73+x, 40+y, 75+x, 67+y);
        rectangulo_lleno(75+x, 54+y, 77+x, 60+y); rectangulo_lleno(75+x, 63+y, 77+x, 70+y);
        rectangulo_lleno(77+x, 50+y, 80+x, 70+y);
        rectangulo_lleno(80+x, 53+y, 82+x, 57+y); rectangulo_lleno(80+x, 63+y, 82+x, 71+y);
        rectangulo_lleno(82+x, 54+y, 83+x, 59+y); rectangulo_lleno(82+x, 66+y, 83+x, 71+y);
        rectangulo_lleno(83+x, 57+y, 87+x, 74+y);

        color_rgb(26, 28, 44); // AZUL OSCURO
        rectangulo_lleno(22+x, 59+y, 25+x, 66+y);
        rectangulo_lleno(25+x, 57+y, 27+x, 63+y);
        rectangulo_lleno(29+x, 60+y, 31+x, 63+y);
        rectangulo_lleno(31+x, 36+y, 34+x, 39+y);
        rectangulo_lleno(34+x, 39+y, 35+x, 41+y); rectangulo_lleno(34+x, 70+y, 35+x, 71+y);
        rectangulo_lleno(35+x, 67+y, 40+x, 70+y);
        rectangulo_lleno(38+x, 57+y, 40+x, 59+y);
        rectangulo_lleno(48+x, 28+y, 52+x, 32+y); rectangulo_lleno(48+x, 45+y, 52+x, 59+y); rectangulo_lleno(48+x, 60+y, 52+x, 66+y);
        rectangulo_lleno(52+x, 27+y, 53+x, 31+y); rectangulo_lleno(52+x, 43+y, 53+x, 59+y); rectangulo_lleno(52+x, 60+y, 53+x, 67+y);
        rectangulo_lleno(53+x, 60+y, 55+x, 67+y);
        rectangulo_lleno(55+x, 60+y, 57+x, 66+y);
        rectangulo_lleno(55+x, 63+y, 60+x, 66+y);

        color_rgb(41, 54, 111); // AZUL
        rectangulo_lleno(20+x, 57+y, 22+x, 74+y);
        rectangulo_lleno(22+x, 53+y, 25+x, 59+y); rectangulo_lleno(22+x, 66+y, 25+x, 71+y);
        rectangulo_lleno(25+x, 52+y, 27+x, 57+y); rectangulo_lleno(25+x, 63+y, 27+x, 71+y);
        rectangulo_lleno(27+x, 50+y, 29+x, 70+y);
        rectangulo_lleno(29+x, 53+y, 31+x, 60+y); rectangulo_lleno(29+x, 63+y, 31+x, 70+y);
        rectangulo_lleno(31+x, 39+y, 34+x, 67+y);
        rectangulo_lleno(34+x, 41+y, 35+x, 67+y);
        rectangulo_lleno(35+x, 50+y, 38+x, 66+y); rectangulo_lleno(35+x, 70+y, 40+x, 74+y);
        rectangulo_lleno(38+x, 39+y, 40+x, 57+y); rectangulo_lleno(38+x, 59+y, 40+x, 66+y);
        rectangulo_lleno(40+x, 36+y, 42+x, 63+y);
        rectangulo_lleno(42+x, 35+y, 45+x, 63+y);
        rectangulo_lleno(45+x, 32+y, 47+x, 36+y); rectangulo_lleno(45+x, 50+y, 48+x, 60+y);
        rectangulo_lleno(47+x, 48+y, 48+x, 60+y);
        rectangulo_lleno(48+x, 66+y, 52+x, 67+y);
        rectangulo_lleno(52+x, 67+y, 53+x, 70+y);
        rectangulo_lleno(53+x, 27+y, 55+x, 31+y); rectangulo_lleno(53+x, 43+y, 55+x, 59+y); rectangulo_lleno(53+x, 67+y, 55+x, 70+y);
        rectangulo_lleno(55+x, 28+y, 57+x, 32+y); rectangulo_lleno(55+x, 45+y, 57+x, 59+y); rectangulo_lleno(55+x, 66+y, 57+x, 67+y);
        rectangulo_lleno(66+x, 57+y, 69+x, 59+y); rectangulo_lleno(66+x, 67+y, 70+x, 70+y);
        rectangulo_lleno(70+x, 39+y, 73+x, 41+y); rectangulo_lleno(70+x, 59+y, 73+x, 60+y); rectangulo_lleno(70+x, 70+y, 73+x, 71+y);
        rectangulo_lleno(73+x, 36+y, 75+x, 39+y);
        rectangulo_lleno(75+x, 60+y, 77+x, 63+y);
        rectangulo_lleno(80+x, 57+y, 82+x, 63+y);
        rectangulo_lleno(82+x, 59+y, 83+x, 66+y);

        color_rgb(65, 166, 246); // CELESTE
        rectangulo_lleno(45+x, 39+y, 47+x, 48+y);
        rectangulo_lleno(47+x, 36+y, 48+x, 45+y);
        rectangulo_lleno(48+x, 35+y, 52+x, 43+y);
        rectangulo_lleno(52+x, 32+y, 53+x, 41+y);
        rectangulo_lleno(53+x, 31+y, 55+x, 32+y); rectangulo_lleno(53+x, 41+y, 55+x, 43+y);
        rectangulo_lleno(55+x, 32+y, 57+x, 35+y); rectangulo_lleno(55+x, 43+y, 57+x, 45+y);
        rectangulo_lleno(57+x, 35+y, 60+x, 36+y); rectangulo_lleno(57+x, 45+y, 60+x, 48+y);
        rectangulo_lleno(60+x, 36+y, 62+x, 39+y); rectangulo_lleno(60+x, 48+y, 62+x, 50+y);
        rectangulo_lleno(70+x, 35+y, 73+x, 39+y);
        rectangulo_lleno(73+x, 32+y, 75+x, 36+y);

        color_rgb(115, 239, 247); // CELESTE CLARO
        rectangulo_lleno(53+x, 32+y, 55+x, 41+y);
        rectangulo_lleno(55+x, 35+y, 57+x, 43+y);
        rectangulo_lleno(57+x, 36+y, 60+x, 45+y);
        rectangulo_lleno(60+x, 39+y, 62+x, 48+y);

    }

    int main(){
        vredimensiona(500,500);

        // Coordenadas del jugador1
        int jugador1X = 200, jugador1Y = 200;

        int teclaIngresada = tecla();

        // Movimiento en el eje X del jugador1
        while(teclaIngresada != ESCAPE){

            if(teclaIngresada == IZQUIERDA){
                jugador1X -= 5;
            }else if (teclaIngresada == DERECHA){
                jugador1X += 5;
            }else if (teclaIngresada == ARRIBA){
                jugador1Y -= 5;
            }else if (teclaIngresada == ABAJO){
                jugador1Y += 5;
            }


            borra();
            jugador1(jugador1X, jugador1Y);
            refresca();
            espera(10);
            teclaIngresada = tecla();
        }



        return 0;
    }







#include "miniwin.h"

using namespace miniwin;

    void enemigo1 (int x, int y){

     color_rgb(255, 225, 223); // GRIS
     rectangulo_lleno(76+x, 32+y, 85+x, 38+y);
     rectangulo_lleno(79+x, 29+y, 88+x, 35+y);

     color_rgb(169, 195, 220); // GRIS CELESTE
     rectangulo_lleno(73+x, 35+y, 97+x, 41+y);
     rectangulo_lleno(88+x, 29+y, 94+x, 35+y);

     color_rgb(119, 170, 161); // VERDE CLARO
     rectangulo_lleno(64+x, 38+y, 76+x, 47+y);
     rectangulo_lleno(76+x, 44+y, 97+x, 47+y);
     rectangulo_lleno(94+x, 38+y, 106+x, 46+y);

     color_rgb(32, 53, 74); // VERDE OSCURO
     rectangulo_lleno(61+x, 38+y, 64+x, 44+y);
     rectangulo_lleno(64+x, 35+y, 67+x, 38+y); rectangulo_lleno(64+x, 44+y, 67+x, 47+y);
     rectangulo_lleno(67+x, 35+y, 73+x, 38+y); rectangulo_lleno(67+x, 47+y, 73+x, 50+y);
     rectangulo_lleno(70+x, 32+y, 73+x, 35+y);
     rectangulo_lleno(73+x, 32+y, 76+x, 35+y); rectangulo_lleno(73+x, 38+y, 76+x, 41+y); rectangulo_lleno(73+x, 50+y, 96+x, 53+y);
     rectangulo_lleno(76+x, 29+y, 79+x, 32+y); rectangulo_lleno(76+x, 41+y, 93+x, 44+y);
     rectangulo_lleno(79+x, 26+y, 91+x, 29+y);
     rectangulo_lleno(91+x, 29+y, 94+x, 32+y);
     rectangulo_lleno(94+x, 32+y, 100+x, 35+y); rectangulo_lleno(94+x, 38+y, 97+x, 41+y);
     rectangulo_lleno(97+x, 35+y, 106+x, 38+y); rectangulo_lleno(97+x, 47+y, 103+x, 50+y);
     rectangulo_lleno(103+x, 44+y, 106+x, 47+y);
     rectangulo_lleno(106+x, 38+y, 109+x, 44+y);

     color_rgb(62, 101, 108); // VERDE
     rectangulo_lleno(64+x, 42+y, 67+x, 45+y);
     rectangulo_lleno(67+x, 44+y, 73+x, 47+y);
     rectangulo_lleno(73+x, 47+y, 97+x, 50+y);
     rectangulo_lleno(97+x, 44+y, 103+x, 47+y);
     rectangulo_lleno(103+x, 41+y, 107+x, 44+y);

     color_rgb(249, 193, 74); // AMARILLO
     rectangulo_lleno(73+x, 41+y, 76+x, 44+y);
     rectangulo_lleno(94+x, 41+y, 97+x, 44+y);

     color_rgb(255, 255, 255); // BLANCO
     rectangulo_lleno(79+x, 44+y, 82+x, 47+y);
     rectangulo_lleno(88+x, 44+y, 91+x, 47+y);
}



void enemigo2 (int x, int y){

    color_rgb(62, 101, 108); // VERDE
    rectangulo_lleno(191+x, 117+y, 236+x, 124+y);
    rectangulo_lleno(191+x, 118+y, 194+x, 121+y);
    rectangulo_lleno(230+x, 115+y, 239+x, 121+y);

    color_rgb(255, 225, 223); // GRIS
    rectangulo_lleno(200+x, 100+y, 206+x, 106+y);
    rectangulo_lleno(209+x, 97+y, 221+x, 109+y);

    color_rgb(169, 195, 220); // GRIS CELESTE
    rectangulo_lleno(197+x, 106+y, 233+x, 115+y);
    rectangulo_lleno(224+x, 100+y, 230+x, 106+y);

    color_rgb(119, 170, 161); // VERDE CLARO
    rectangulo_lleno(191+x, 112+y, 200+x, 118+y);
    rectangulo_lleno(194+x, 118+y, 230+x, 121+y);
    rectangulo_lleno(230+x, 115+y, 233+x, 118+y);
    rectangulo_lleno(233+x, 112+y, 236+x, 115+y);

    color_rgb(32, 53, 74); // VERDE OSCURO
    rectangulo_lleno(185+x, 121+y, 188+x, 124+y);
    rectangulo_lleno(188+x, 115+y, 191+x, 121+y);
    rectangulo_lleno(191+x, 112+y, 194+x, 115+y); rectangulo_lleno(191+x, 121+y, 194+x, 124+y); rectangulo_lleno(191+x, 127+y, 194+x, 130+y);
    rectangulo_lleno(194+x, 106+y, 197+x, 112+y); rectangulo_lleno(194+x, 124+y, 236+x, 127+y);
    rectangulo_lleno(197+x, 103+y, 200+x, 106+y); rectangulo_lleno(197+x, 112+y, 200+x, 115+y);
    rectangulo_lleno(200+x, 94+y, 203+x, 97+y); rectangulo_lleno(200+x, 100+y, 203+x, 103+y); rectangulo_lleno(200+x, 115+y, 230+x, 118+y);
    rectangulo_lleno(203+x, 97+y, 209+x, 100+y);
    rectangulo_lleno(204+x, 127+y, 207+x, 136+y);
    rectangulo_lleno(209+x, 94+y, 221+x, 97+y);
    rectangulo_lleno(221+x, 97+y, 227+x, 100+y);
    rectangulo_lleno(224+x, 127+y, 227+x, 136+y);
    rectangulo_lleno(227+x, 94+y, 230+x, 97+y); rectangulo_lleno(227+x, 100+y, 230+x, 103+y);
    rectangulo_lleno(230+x, 103+y, 233+x, 106+y); rectangulo_lleno(230+x, 112+y, 233+x, 115+y);
    rectangulo_lleno(233+x, 106+y, 236+x, 112+y); rectangulo_lleno(236+x, 121+y, 239+x, 124+y); rectangulo_lleno(236+x, 127+y, 239+x, 130+y);
    rectangulo_lleno(197+x, 103+y, 200+x, 106+y); rectangulo_lleno(197+x, 112+y, 200+x, 115+y);
    rectangulo_lleno(200+x, 94+y, 203+x, 97+y); rectangulo_lleno(200+x, 100+y, 203+x, 103+y); rectangulo_lleno(200+x, 115+y, 230+x, 118+y);
    rectangulo_lleno(203+x, 112+y, 206+x, 115+y);
    rectangulo_lleno(224+x, 112+y, 227+x, 115+y);
    rectangulo_lleno(236+x, 112+y, 239+x, 115+y);
    rectangulo_lleno(239+x, 115+y, 242+x, 121+y);
    rectangulo_lleno(242+x, 121+y, 245+x, 124+y);

    color_rgb(105, 139, 184); // GRIS AZUL
    rectangulo_lleno(206+x, 100+y, 209+x, 109+y);
    rectangulo_lleno(209+x, 103+y, 221+x, 106+y);
    rectangulo_lleno(212+x, 106+y, 217+x, 109+y);

    color_rgb(80, 77, 120); // MORADO
    rectangulo_lleno(206+x, 109+y, 224+x, 112+y);
    rectangulo_lleno(209+x, 112+y, 221+x, 115+y);
    rectangulo_lleno(221+x, 100+y, 224+x, 112+y);

    color_rgb(225, 225, 225); // BLANCO
    rectangulo_lleno(194+x, 115+y, 197+x, 118+y);
    rectangulo_lleno(197+x, 118+y, 203+x, 121+y);
    rectangulo_lleno(206+x, 118+y, 209+x, 121+y);
}





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
        int jugador1X = 200, jugador1Y = 300;

        // Coordenadas del enemigo1
        int enemigo1X = 50, enemigo1Y = 20;

        // Coordenadas del enemigo2
        int enemigo2X = 50, enemigo2Y = 20;

        // Valor ingresado al presionar el teclado
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




            // Movimiento de la nave enemiga1
            int aleatorio, direccion;

            aleatorio = rand()%50;
            if(aleatorio == 0){
                direccion = IZQUIERDA;
            }else if(aleatorio == 1){
                direccion = DERECHA;
            }

            if(direccion == IZQUIERDA){
                if( enemigo1X > 0){
                    enemigo1X -= 15;
                }
            }else if (direccion == DERECHA){
                if (enemigo1X < 350){
                    enemigo1X += 15;
                }
            }


            // Movimiento de la nave enemiga2
            int aleatorio2, direccion2;

            aleatorio2 = rand()%50;
            if(aleatorio2 == 0){
                direccion2 = IZQUIERDA;
            }else if(aleatorio2 == 1){
                direccion2 = DERECHA;
            }

            if(direccion2 == IZQUIERDA){
                if( enemigo2X > -150){
                    enemigo2X -= 15;
                }
            }else if (direccion2 == DERECHA){
                if (enemigo2X < 225){
                    enemigo2X += 15;
                }
            }


            borra();
            jugador1(jugador1X, jugador1Y);
            enemigo1(enemigo1X, enemigo1Y);
            enemigo2(enemigo2X, enemigo2Y);
            refresca();
            espera(10);
            teclaIngresada = tecla();


        }



        return 0;
    }







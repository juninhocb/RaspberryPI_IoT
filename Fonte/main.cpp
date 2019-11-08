
#include "thinger/thinger.h"
#include <string.h>

#define DEBUG true
#define USER_ID             "juninhocb"
#define DEVICE_ID           "Raspberry"
#define DEVICE_CREDENTIAL   "Teste12345"

char = tensaoBateria[50]; 

int main(int argc, char *argv[])
{
    thinger_device thing(USER_ID, DEVICE_ID, DEVICE_CREDENTIAL);


    //Serial.begin(9600);

    /* Comandos para o bluetooh

    tensaoBateria = sendData("AT+RV", 1000, DEBUG);  //tem que ver se a função retorna string	
   
 
    */

    /* Enviando os dados para o thinger io

    thing["Dados do Veículo"] >> [](pson& out){

    out["Tensão da Bateria"] = tensaoBateria; //envia para o thinger io a tensão da bateria    
	
    }


    */

    thing.start();
    return 0;
}



#include "thinger/thinger.h"

#define USER_ID             "juninhocb"
#define DEVICE_ID           "Raspberry"
#define DEVICE_CREDENTIAL   "Teste12345"

int main(int argc, char *argv[])
{
    thinger_device thing(USER_ID, DEVICE_ID, DEVICE_CREDENTIAL);

    // define thing resources here. i.e, this is a sum example
    thing["sum"] = [](pson& in, pson& out){
        out["result"] = (int) in["value1"] - (int) in["value2"];
    };

    thing.start();
    return 0;
}


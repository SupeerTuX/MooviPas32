#include <Arduino.h>


//Definiciones de MFRC522
#define SECTOR_ID     0   //Sector donde se almacena el ID
#define BLOCK_ID      1   //Bloque del sector donde se almacena el ID
#define TBLOCK_ID     3   //Bloque del sector NOMBRE usado para autenticacion

#define SECTOR_SALDO      2   //Sector donde se almacena el Saldo
#define BLOCK_SALDO       8   //Bloque del sector donde se almacena el Saldo
#define TBLOCK_SALDO      11   //Bloque del sector SALDO usado para autenticacion

#define SALDO_INSUFICIENTE  2

#define RST_PIN             4
#define SS_PIN              2
//Prototipos de funciones


byte leerID(char *id);

byte leerSaldo(char *saldo);

byte validarTarjeta();

byte procesoSaldo(char *id, char *saldo);

byte readBlock(char *dataBlock, byte block, byte trailerBlock);

byte writeBlock(char *dataBlock, byte block, byte trailerBlock);

//Funcion de testeo, realiza una peticion GET al setvidor MooviPas.mx
byte testGET();

byte conectarWifi();

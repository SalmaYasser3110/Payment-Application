

// header file guard
//-----------------------------------------------------------------
#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <stdint.h>

//typedefs
//-----------------------------------------------------------------
typedef enum EN_cardError_t
{
    CARD_OK,
    WRONG_NAME,
    WRONG_EXP_DATE,
    WRONG_PAN
}EN_cardError_t;

typedef struct ST_cardData_t
{
    uint8_t cardHolderName[25];
    uint8_t primaryAccountNumber[20];
    uint8_t cardExpirationDate[6];
}ST_cardData_t;

// prototypes
//-----------------------------------------------------------------


EN_cardError_t getCardHolderName(ST_cardData_t* cardData);
EN_cardError_t getCardExpiryDate(ST_cardData_t* cardData);
EN_cardError_t getCardPAN(ST_cardData_t* cardData);


#endif // CARD_H_INCLUDED

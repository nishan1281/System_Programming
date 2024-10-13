//
// Created by nisha on 10/13/2024.
//

// CreditCardPayment.h
#pragma once

#include "IPaymentMethod.h"

class CreditCardPayment : public IPaymentMethod {
public:
    void pay(int amount) override;
};

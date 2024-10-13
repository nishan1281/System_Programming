//
// Created by nisha on 10/13/2024.
//

#pragma once

#include "IPaymentMethod.h"

class PayPalPayment : public IPaymentMethod {
public:
    void pay(int amount) override;
};



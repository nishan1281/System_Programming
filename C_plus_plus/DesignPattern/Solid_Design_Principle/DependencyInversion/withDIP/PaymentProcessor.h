//
// Created by nisha on 10/13/2024.
//

#ifndef PAYMENTPROCESSOR_H
#define PAYMENTPROCESSOR_H

#include <memory>
#include "IPaymentMethod.h"

class PaymentProcessor {
private:
    std::unique_ptr<IPaymentMethod> paymentMethod;

public:
    explicit PaymentProcessor(std::unique_ptr<IPaymentMethod> method);
    void processPayment(int amount);
};

#endif // PAYMENTPROCESSOR_H
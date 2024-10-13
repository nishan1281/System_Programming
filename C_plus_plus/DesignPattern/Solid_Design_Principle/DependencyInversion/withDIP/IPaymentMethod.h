//
// Created by nisha on 10/13/2024.
//

// IPaymentMethod.h
#pragma once

class IPaymentMethod {
public:
    virtual ~IPaymentMethod() = default;
    virtual void pay(int amount) = 0;

};


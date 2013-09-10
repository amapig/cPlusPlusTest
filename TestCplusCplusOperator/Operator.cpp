#include"Operator.h"

Operator::Operator():account(0) {
}

Operator::~Operator() {

}

void Operator::setAccount(int account) {
    this->account = account;
}

int Operator::getAccount() {
    return account;
}

Operator operator+(Operator obj1, Operator obj2) {
    Operator obj3;
    obj3.setAccount(obj1.getAccount() + obj2.getAccount());
    return obj3;
}

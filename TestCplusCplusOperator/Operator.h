#ifndef OPERATOR_H
#define OPERATOR_H

class Operator {
public:
    Operator();
    ~Operator();
    void setAccount(int account);
    int getAccount();
private:
    int account;
};

Operator operator+(Operator obj1, Operator obj2);
#endif // OPERATOR_H

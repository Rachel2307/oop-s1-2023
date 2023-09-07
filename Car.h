#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();
    Car(int price);

    int get_price() const;
    int get_emissions() const;
    void set_price(int price);
    void drive(int kms);

    virtual ~Car(); // Virtual destructor for polymorphism
private:
    int price;
    int emissions;
};

#endif // CAR_H
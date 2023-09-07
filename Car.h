#ifndef CAR_H
#define CAR_H
class Car {
    private:
        int price;
        int emissions;
    public:
        // default constructor
        Car();
        // creates a Car with a price
        Car(int price);
        // set and get price
        void set_price();
        int get_price() const;
        // set and get emissions
        void set_emissions();
        int get_emissions() const;

        virtual void drive(int kms) const; 
};
#endif

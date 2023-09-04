#ifndef APPLIANCE_H
#define APPLIANCE_H
class Appliance {
    private:
        int powerRating;
        bool isOn;
    public:
        Appliance();
        Appliance(int powerRating);
        
        void set_powerRating(int powerRating);
        void set_isOn(bool isOn);

        int get_powerRating() const;
        bool get_isOn() const;

        void turnOn();
        void turnOff();
        virtual double getPowerConsumption() const;

};
#endif
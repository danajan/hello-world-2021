#ifndef BOD_H
#define BOD_H


class Bod
{
    public:
        Bod();
        Bod(double x_in, double y_in);
        virtual ~Bod(); // Destructor
        void posun (double xp, double yp);
        void vypis() const;
    private:
        double x,y;
};

#endif // BOD_H


#ifndef FRACTION_H_
#define FRACTION_H_

class fraction {

public:
        fraction(int pCounter=0, int pDenom=1);

        int getCounter();
        void setCounter(int pCounter);

        int  getDenominator ();
        void  setDenominator ( int  pDenominator );

        fraction operator+(fraction &pSummand);
        fraction operator-(fraction &pSubtrahend);
        fraction operator*(fraction &pMultiplicator);
        fraction operator/(fraction &pDivisor);

private:
        int counter;
        int denominator;

        int bcd(int a, int b);
        void reduce();
        void  validateDenominator ( int  pDenom );


};

#endif /* FRACTION_H_ */

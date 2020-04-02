#include <iostream>

    class statistician
    {
    public:
        statistician( );
        void next(double r);
        void reset( );
        int length( );
        double sum( );
        double mean( ); // What is the average of the numbers in the sequence
        double minimum( );
        double maximum( );
        int count;       // How many numbers in the sequence
        double total;    // The sum of all the numbers in the sequence
        double tinyest;  // The smallest number in the sequence
        double largest;  // The largest number in the sequence
    };
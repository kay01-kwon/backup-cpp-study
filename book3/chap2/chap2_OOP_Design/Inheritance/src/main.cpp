#include "progression_class.h"
#include "arithprogression_class.h"
#include "geometricprogression_class.h"
#include "fibonacciprogression_class.h"

int main()
{
    Progression* prog;

    cout<<"Normal progression: \n";
    prog = new Progression();
    prog -> printProgression(10);
    cout<<endl;

    cout<<"Arithmetic progression with default increment: \n";
    prog = new ArithProgression();
    prog -> printProgression(10);
    cout<<endl;

    cout<<"Arithmetic progression with increment 5: \n";
    prog = new ArithProgression(5);
    prog -> printProgression(10);
    cout<<endl;

    cout<<"Geometric progression with default base: \n";
    prog = new GeomProgression();
    prog -> printProgression(10);
    cout<<endl;

    cout<<"Geometric progression with base 3: \n";
    prog = new GeomProgression(3);
    prog -> printProgression(10);
    cout<<endl;

    cout<<"Fibonacci progression with default start values: \n";
    prog = new FibonProgression();
    prog -> printProgression(10);
    cout<<endl;

    cout<<"Fibonacci progression with start values 4 and 6: \n";
    prog = new FibonProgression(4,6);
    prog -> printProgression(10);
    cout<<endl;

    delete prog;

    return EXIT_SUCCESS;

}
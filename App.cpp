int main() {

    // create a BMI object named b1
    // using the two-arg constructor
    // providing 72.0 inches and a weight
    // of 185 pounds
    BMI b1;
    double height;
    double weight;

    // print b1 to stdout
    b1.printBMI();

    // set b1's height to 75 inches
    b1.setHeight(75);

    // print b1 to stdout
    b1.BMI::setHeight();
    cout << "Height : " << height << endl;
    b1.printBMI();


    // set b1's weight to 200 pounds
     b1.setWeight(200);

    // print b1 to stdout
    b1.BMI::setWeight();
    cout << "Weight : " << weight << endl;
    b1.printBMI();

    // create a BMI object named b2 using its no-arg
    // constructor
    BMI b2;

    // declare local variables that will be used when calling 
    // b2's getter method
    b2.getBMI();

    // set b2's height to 75 inches
    b2.setHeight(75);

    // set b2's weight to 200 pounds
     b2.setWeight(200);

    // call method on b2 that will get its field
    // values and store them in local variables
    b2.setHeight();
    b2.setWeight();

    // display values in local variables to stdout
    b2.printBMI();

    // call method on t1 that will test if it is equal to t2
    // and display its return to stdout as no or yes
    cout << (b1.equalBMI(b2) ? "yes" : "no") << endl;

}
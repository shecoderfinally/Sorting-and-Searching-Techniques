/**
  *This class invokes methods to display celsius and fahrenheit conversions
*/
public class Ex6_8 {
  public static void main(String[] args) {
    //declare fahrenheit and celsius variables and assign them to initial test temps
    double fahrenheit = 120.0;
    double celsius = 40.0;
    
    //print table format
    System.out.println("Celsius        Fahrenheit  |   Fahrenheit       Celsius");
    System.out.println("_______________________________________________________");
    
    //for loop that iterates for amount of test loops (10)
    for(int i = 0; i < 10; i++) {
      //print out using decimal spacing and by calling methods
      System.out.printf("%5.1f %15.1f      |    %5.1f %15.2f\n", celsius, celsiusToFahrenheit(celsius), fahrenheit, fahrenheitToCelsius(fahrenheit));
      celsius = celsius - 1; //celsius goes down by 1
      fahrenheit = fahrenheit - 10; //fahrenheit goes down by 10
    }  
  }
    /**
      * celsiusToFahrenheit
      * converts from celsius to fahrenheit
    */
    public static double celsiusToFahrenheit(double celsius) {
      return (9.0 / 5) * celsius + 32; //celsius to fahrenheit equation
    }
    /**
      * fahrenheitToCelsius
      * converts from fahrenheit to celsius
    */
    public static double fahrenheitToCelsius(double fahrenheit) {
      return (5.0 / 9) * (fahrenheit - 32); //fahrenheit to celsius equation
    } 
}




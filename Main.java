public class Main {

  static double principal = 45.00;
  static double dayRate = 0.10;
  static double gain = 0;
  static int year = 1;

  static int assetPrice = 350;

  static void printMonthRate() {
    System.out.println(30.0 * dayRate);
  }

  static double monthRate() {
    return (30.0 * dayRate);
  }

  static void yearlyRate() {
    System.out.println("Year " + year + "----------------------------");
    System.out.println("Starting Principal: " + (principal + gain));
    System.out.println("Bittensor Price: " + assetPrice);
    System.out.println("Yearly Gain: " + monthRate() * 12.0);
    System.out.println("Value in Cash: " + (long)(assetPrice * ((long)(principal + gain))));
    System.out.println("Value gained: " + ((monthRate() * 12.0) * assetPrice));
    gain += (monthRate() * 12.0);
    year += 1;
    assetPrice *= 2;
  }

  public static void main(String[] args) {
    System.out.println("Hello World");
    for (int i = 0; i < 10; i++) {
      yearlyRate();
    }
  }
} 
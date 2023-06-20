
 public class RomanNumeral {
 
 private String romanNum;
 private int decimalNum;



 public RomanNumeral() {

 }


 public RomanNumeral(String roman) {
 this.romanNum = roman;
 }

 public RomanNumeral(int num) {
 this.decimalNum = num;
 }


public String getRomanNum() {
        return romanNum;
        }

public void setRomanNum(String romanNum) {
        this.romanNum = romanNum;
        }

public int getDecimalNum() {
        return decimalNum;
        }


public void setDecimalNum(int decimalNum) {
        this.decimalNum = decimalNum;
        }

public void convertRomToDec() {
        System.out.println("Converting Roman Number to Decimal...");
        int num = 0;
        char Previous = 0;

        for (int x = 0; x < romanNum.length(); x++) {
        if (romanNum.charAt(x) == 'I')
        num += 1;

        if (romanNum.charAt(x) == 'V') {

        if (Previous == 'I') {
        num -= 2;
        }
        num += 5;
        }

        if (romanNum.charAt(x) == 'X') {
        if (Previous == 'I') {
        num -= 2;
        }
        num += 10;
        }

        if (romanNum.charAt(x) == 'L') {
        if (Previous == 'X') {
        num -= 20;
        }
        num += 50;
        }

        if (romanNum.charAt(x) == 'C') {
        if (Previous == 'X') {
        num -= 20;
        }
        num += 100;
        }

        if (romanNum.charAt(x) == 'D') {
        if (Previous == 'C') {
        num -= 200;
        }
        num += 500;
        }

        if (romanNum.charAt(x) == 'M') {
        if (Previous == 'C') {
        num -= 200;
        }
        num += 1000;
        }
        Previous = romanNum.charAt(x);
        }
        this.decimalNum=num;


        }

public void convertDecToRom() {
        System.out.println("Converting Decimal to Roman Number...");
        int size=13;
        String roman[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        int decimal[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
        String romanNumber = "";

        for (int i = 0; i <size ; i++) {

        while (decimalNum >= decimal[i]) {

        romanNumber = romanNumber + roman[i];

        decimalNum = decimalNum - decimal[i];
        }
        }
        this.romanNum=romanNumber;
        }

public void printRoman() {
        System.out.println("Roman Number :" + romanNum);
        }

public void printDecimal() {
        System.out.println("Decimal Number :" + decimalNum);
        }

        }



public class Test {

    public static void main(String[] args) {

        String romNum;
        int deciNum;
        RomanNumeral rn = null;

        Scanner sc = new Scanner(System.in);

        while (true) {

            System.out.println("\n:: Menu ::");
            System.out.println("1.Decimal to Roman");
            System.out.println("2.Roman to Decimal");
            System.out.println("3.Break");


            System.out.print("Enter Choice :");
            int choice = sc.nextInt();


            switch (choice) {
                case 1: {
                    System.out.print("Enter Decimal number :");
                    deciNum = sc.nextInt();

                    rn = new RomanNumeral(deciNum);
                    rn.convertDecToRom();
                    rn.printRoman();

                    continue;
                }
                case 2: {
                    System.out.print("Enter Roman number :");
                    romNum = sc.next();

                    rn = new RomanNumeral(romNum);
                    rn.convertRomToDec();
                    rn.printDecimal();

                    continue;
                }
                case 3: {
                    break;
                }
                default: {
                    System.out.println("** Invalid Choice **");
                    continue;
                }

            }
            break;

        }

    }

}

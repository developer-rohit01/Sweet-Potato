//Demonstrate String creation, comparison, immutability, and methods.

public class StringDemo {
public static void main(String[] args) {
String s1 = "Java";
String s2 = new String("Java");
System.out.println(s1.equals(s2));
System.out.println(s1 == s2);
String s3 = s1.concat(" Programming");
System.out.println(s1);
System.out.println(s3);
System.out.println("Length = " + s3.length());
System.out.println("Uppercase = " + s3.toUpperCase());
}
}
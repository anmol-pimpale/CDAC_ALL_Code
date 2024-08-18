package demo;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
public class Demo {
	    public static void main(String[] args) {
	        Scanner scanner = new Scanner(System.in);
	        System.out.println("Enter a sequence of numbers separated by spaces:");
	        String input = scanner.nextLine();
	        String[] numbers = input.split(" ");
	        Set<String> uniqueNumbers = new HashSet<>();

	        for (String number : numbers) {
	            if (!uniqueNumbers.add(number)) {
	                System.out.println("There are duplicate numbers.");
	                return;
	            }
	        }

	        System.out.println("All numbers are unique.");
	    }
	}


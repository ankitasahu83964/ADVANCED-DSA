import java.util.Scanner;

class Library {
    String bookName;
    String studentName;
    boolean issued = false;

    void addBook() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Book Name: ");
        bookName = sc.nextLine();

        System.out.println("Book added successfully!");
    }

    void issueBook() {
        Scanner sc = new Scanner(System.in);

        if (!issued) {
            System.out.print("Enter Student Name: ");
            studentName = sc.nextLine();

            issued = true;
            System.out.println("Book issued successfully!");
        } else {
            System.out.println("Book is already issued!");
        }
    }

    void returnBook() {
        if (issued) {
            issued = false;
            studentName = "";
            System.out.println("Book returned successfully!");
        } else {
            System.out.println("Book is not issued!");
        }
    }

    void display() {
        System.out.println("\n--- Library Details ---");
        System.out.println("Book Name: " + bookName);

        if (issued)
            System.out.println("Issued To: " + studentName);
        else
            System.out.println("Status: Available");
    }
}

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Library lib = new Library();

        lib.addBook();

        System.out.println("\n1. Issue Book");
        System.out.println("2. Return Book");
        System.out.println("3. Display Details");

        System.out.print("Enter choice: ");
        int choice = sc.nextInt();

        switch (choice) {
            case 1:
                lib.issueBook();
                break;

            case 2:
                lib.returnBook();
                break;

            case 3:
                lib.display();
                break;

            default:
                System.out.println("Invalid choice!");
        }

        lib.display();
    }
}

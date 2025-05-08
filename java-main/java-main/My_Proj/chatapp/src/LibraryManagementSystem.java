import java.util.ArrayList;
import java.util.Scanner;

class Book {
    String title;
    String author;
    boolean available;

    public Book(String title, String author) {
        this.title = title;
        this.author = author;
        this.available = true;
    }
}

class Library {
    ArrayList<Book> books;

    public Library() {
        this.books = new ArrayList<>();
    }

    public void addBook(Book book) {
        books.add(book);
    }

    public void displayBooks() {
        System.out.println("Library Books:");
        for (Book book : books) {
            System.out.println(book.title + " by " + book.author + " - " + (book.available ? "Available" : "Not Available"));
        }
    }

    public void borrowBook(String title) {
        for (Book book : books) {
            if (book.title.equalsIgnoreCase(title) && book.available) {
                book.available = false;
                System.out.println("You have successfully borrowed: " + book.title);
                return;
            }
        }
        System.out.println("Book not available for borrowing: " + title);
    }

    public void returnBook(String title) {
        for (Book book : books) {
            if (book.title.equalsIgnoreCase(title) && !book.available) {
                book.available = true;
                System.out.println("You have successfully returned: " + book.title);
                return;
            }
        }
        System.out.println("Invalid book return: " + title);
    }
}

public class LibraryManagementSystem {
    public static void main(String[] args) {
        Library library = new Library();
        try (Scanner scanner = new Scanner(System.in)) {
            // Adding some sample books
            library.addBook(new Book("Java Programming", "John Doe"));
            library.addBook(new Book("Data Structures and Algorithms", "Jane Smith"));

            while (true) {
                System.out.println("\nMenu:");
                System.out.println("1. Display Books");
                System.out.println("2. Borrow a Book");
                System.out.println("3. Return a Book");
                System.out.println("4. Exit");

                System.out.print("Enter your choice: ");
                int choice = scanner.nextInt();

                switch (choice) {
                    case 1:
                        library.displayBooks();
                        break;
                    case 2:
                        System.out.print("Enter the title of the book you want to borrow: ");
                        scanner.nextLine();  // Consume the newline character
                        String borrowTitle = scanner.nextLine();
                        library.borrowBook(borrowTitle);
                        break;
                    case 3:
                        System.out.print("Enter the title of the book you want to return: ");
                        scanner.nextLine();  // Consume the newline character
                        String returnTitle = scanner.nextLine();
                        library.returnBook(returnTitle);
                        break;
                    case 4:
                        System.out.println("Exiting the Library Management System. Thank you!");
                        System.exit(0);
                        break;
                    default:
                        System.out.println("Invalid choice. Please enter a valid option.");
                }
            }
        }
    }
}

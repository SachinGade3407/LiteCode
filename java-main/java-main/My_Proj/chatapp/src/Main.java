import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Course {
    String name;
    int courseId;

    public Course(int courseId, String name) {
        this.courseId = courseId;
        this.name = name;
    }
}

class Student {
    String name;
    int studentId;

    public Student(int studentId, String name) {
        this.studentId = studentId;
        this.name = name;
    }
}

class Enrollment {
    int enrollmentId;
    int courseId;
    int studentId;

    public Enrollment(int enrollmentId, int courseId, int studentId) {
        this.enrollmentId = enrollmentId;
        this.courseId = courseId;
        this.studentId = studentId;
    }
}

class OnlineCourseManagementSystem {
    List<Course> courses = new ArrayList<>();
    List<Student> students = new ArrayList<>();
    List<Enrollment> enrollments = new ArrayList<>();

    public void addCourse(String name) {
        int courseId = courses.size() + 1;
        courses.add(new Course(courseId, name));
        System.out.println("Course added successfully.");
    }

    public void addStudent(String name) {
        int studentId = students.size() + 1;
        students.add(new Student(studentId, name));
        System.out.println("Student added successfully.");
    }

    public void enrollStudent(int courseId, int studentId) {
        int enrollmentId = enrollments.size() + 1;
        enrollments.add(new Enrollment(enrollmentId, courseId, studentId));
        System.out.println("Student enrolled successfully.");
    }

    public void displayEnrollments() {
        for (Enrollment enrollment : enrollments) {
            System.out.println("Enrollment ID: " + enrollment.enrollmentId +
                    ", Course: " + getCourseName(enrollment.courseId) +
                    ", Student: " + getStudentName(enrollment.studentId));
        }
    }

    private String getCourseName(int courseId) {
        for (Course course : courses) {
            if (course.courseId == courseId) {
                return course.name;
            }
        }
        return "Course not found";
    }

    private String getStudentName(int studentId) {
        for (Student student : students) {
            if (student.studentId == studentId) {
                return student.name;
            }
        }
        return "Student not found";
    }
}

public class Main {
    public static void main(String[] args) {
        OnlineCourseManagementSystem system = new OnlineCourseManagementSystem();
        try (Scanner scanner = new Scanner(System.in)) {
            while (true) {
                System.out.println("1. Add Course");
                System.out.println("2. Add Student");
                System.out.println("3. Enroll Student");
                System.out.println("4. Display Enrollments");
                System.out.println("0. Exit");
                System.out.print("Enter your choice: ");
                
                int choice = scanner.nextInt();

                switch (choice) {
                    case 1:
                        System.out.print("Enter Course Name: ");
                        scanner.nextLine(); // consume the newline character
                        String courseName = scanner.nextLine();
                        system.addCourse(courseName);
                        break;
                    case 2:
                        System.out.print("Enter Student Name: ");
                        scanner.nextLine(); // consume the newline character
                        String studentName = scanner.nextLine();
                        system.addStudent(studentName);
                        break;
                    case 3:
                        System.out.print("Enter Course ID: ");
                        int courseId = scanner.nextInt();
                        System.out.print("Enter Student ID: ");
                        int studentId = scanner.nextInt();
                        system.enrollStudent(courseId, studentId);
                        break;
                    case 4:
                        system.displayEnrollments();
                        break;
                    case 0:
                        System.exit(0);
                    default:
                        System.out.println("Invalid choice. Try again.");
                }
            }
        }
    }
}

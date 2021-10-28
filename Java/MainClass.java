public class MainClass {
    public static void main(String[] args) {

        Person p1 = new Person(20, "Pratik");
        Person p2 = new Person();

        // p1.age = 20;
        // p1.name = "Pratik";
        p2.age = 22;
        p2.name = "Awasthi";

        System.out.println(p1.age + " " + p1.name);
        System.out.println(p2.age + " " + p2.name);

        p1.walk(5);
        p1.walk();
        p2.eat();

        System.out.println(Person.count + " is count");

        developer d1 = new developer(25, "Pratik Awasthi");
        d1.walk();
    }

}

class developer extends Person {
    developer(int age, String name) {
        super(age, name);
    }

    void walk() {
        System.out.println("Developer " + name + " walking");
    }
}

class Person {

    String name;
    int age;
    static int count;

    Person() {
        count++;
        System.out.println("constructor");
    }

    Person(int age, String name) {
        this();
        this.age = age;
        this.name = name;
    }

    void walk() {
        System.out.println(name + " walking");
    }

    void eat() {
        System.out.println(name + " eating");
    }

    void walk(int steps) {
        System.out.println(name + " walks " + steps + " steps");
    }
}
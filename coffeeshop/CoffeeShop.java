package coffeeshop;

public class CoffeeShop {
    public static void main(String[] args) {
        // Start with a plain coffee
        Coffee coffee = new PlainCoffee();
        coffee = new MilkDecorator(coffee);
        coffee = new SugarDecorator(coffee);
        //coffee = new HoneyDecorator(coffee);
        
        System.out.println(coffee.description() + " - " + coffee.cost() + " BDT");
    }
}


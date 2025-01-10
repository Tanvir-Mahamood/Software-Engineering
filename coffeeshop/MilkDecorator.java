package coffeeshop;

// Concrete Decorator: Adds Milk
public class MilkDecorator extends CoffeeDecorator {
    public MilkDecorator(Coffee coffee) {
        super(coffee);
    }

    @Override
    public double cost() {
        return super.cost() + 10.0; // Add milk cost
    }

    @Override
    public String description() {
        return super.description() + ", Milk";
    }
}


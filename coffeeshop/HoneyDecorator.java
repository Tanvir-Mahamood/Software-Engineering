package coffeeshop;

// Concrete Decorator: Adds Honey
public class HoneyDecorator extends CoffeeDecorator {
    public HoneyDecorator(Coffee coffee) {
        super(coffee);
    }

    @Override
    public double cost() {
        return super.cost() + 50.0; // Add honey cost
    }

    @Override
    public String description() {
        return super.description() + ", Honey";
    }
}


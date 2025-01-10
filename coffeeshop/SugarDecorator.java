package coffeeshop;

// Concrete Decorator: Adds Sugar
public class SugarDecorator extends CoffeeDecorator {
    public SugarDecorator(Coffee coffee) {
        super(coffee);
    }

    @Override
    public double cost() {
        return super.cost() + 5.0; // Add sugar cost
    }

    @Override
    public String description() {
        return super.description() + ", Sugar";
    }
}




package coffeeshop;

// Concrete Component
public class PlainCoffee implements Coffee {
    @Override
    public double cost() {
        return 50.0; // Base cost of plain coffee
    }

    @Override
    public String description() {
        return "Plain Coffee";
    }
}


package factory_method;

// Concrete Product for macOS
public class MacOSButton implements Button {
    @Override
    public void render() {
        System.out.println("Render a button in macOS style.");
    }

    @Override
    public void onClick() {
        System.out.println("Handle a click event in macOS style.");
    }
}

package factory_method;

// Concrete Product for Windows
public class WindowsButton implements Button {
    @Override
    public void render() {
        System.out.println("Render a button in Windows style.");
    }

    @Override
    public void onClick() {
        System.out.println("Handle a click event in Windows style.");
    }
}

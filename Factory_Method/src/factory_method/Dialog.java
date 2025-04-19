package factory_method;

// Creator abstract class
public abstract class Dialog {
    // Factory Method
    public abstract Button createButton();

    public void renderWindow() {
        Button button = createButton();
        button.render();
        button.onClick();
    }
}
package factory_method;

// Concrete Creator for macOS
public class MacOSDialog extends Dialog {
    @Override
    public Button createButton() {
        return new MacOSButton();
    }
}

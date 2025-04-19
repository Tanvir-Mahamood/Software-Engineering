package factory_method;

public class Client {
    public static void main(String[] args) {
        // Create a Windows dialog
        Dialog windowsDialog = new WindowsDialog();
        windowsDialog.renderWindow();

        // Create a macOS dialog
        Dialog macOsDialog = new MacOSDialog();
        macOsDialog.renderWindow();
    }
}

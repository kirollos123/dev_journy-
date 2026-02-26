import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class TestEnvironment {
    
    @Test
    public void testExample() {
        assertEquals(2, 1 + 1);
    }
    
    @Test
    public void testString() {
        String message = "Hello, World!";
        assertNotNull(message);
        assertTrue(message.contains("World"));
    }
}
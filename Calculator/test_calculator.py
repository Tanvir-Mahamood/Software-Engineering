import unittest
from calculator import Calculator

class TestCalculator(unittest.TestCase):

    def setUp(self):
        """Set up a Calculator instance before each test"""
        self.calc = Calculator()

    def test_add(self):
        self.assertEqual(self.calc.add(5, 3), 8)
        self.assertEqual(self.calc.add(-2, 2), 0)
        self.assertEqual(self.calc.add(-2, -3), -5)

    def test_sub(self):
        self.assertEqual(self.calc.sub(5, 3), 2)
        self.assertEqual(self.calc.sub(3, 5), -2)
        self.assertEqual(self.calc.add(-2, -3), 1)

    def test_mul(self):
        self.assertEqual(self.calc.mul(5, 3), 15)
        self.assertEqual(self.calc.mul(-2, 3), -6)
        self.assertEqual(self.calc.add(-2, -3), 6)

    def test_div(self):
        self.assertEqual(self.calc.div(6, 3), 2)
        self.assertEqual(self.calc.div(5, 2), 2.5)

    def test_div_by_zero(self):
        with self.assertRaises(ValueError):
            self.calc.div(5, 0)

if __name__ == '__main__':
    unittest.main()

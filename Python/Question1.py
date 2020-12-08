import unittest

class Test_reserve_2d_array(unittest.TestCase):

    def test_RowSize(self):
        self.assertEqual(rows,0,msg="Value Error")
    
    def test_ColumnSize(self):
        self.assertEqual(columns,0,msg="Value Error")

    def test_BytesList(self):
        expected_list = [[0 for i in range(columns)] for j in range(rows)]
        self.assertEqual(output_list, expected_list)

if __name__ == '__main__':
    unittest.main()
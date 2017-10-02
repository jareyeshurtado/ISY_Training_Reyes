'''my_dict = {"Oostende" : 8400,
"Zandvoorde" : 8400,
"Stene" : 8400,
"Brugge" : 8000,
"Gent" : 9000}'''
import unittest

def dict_inverse (d):
    inv_dict = {}
    for k,v in d.items():
        if v not in inv_dict:
            inv_dict[v] = []
        inv_dict[v].append(k)
    return inv_dict

#myNewInvDict = dict_inverse(my_dict)
#print(myNewInvDict)

class Test_dict_inverse(unittest.TestCase) :
    def test_dict_inverse(self):
        d = {"Oostende" : 8400,
            "Zandvoorde" : 8400,
            "Stene" : 8400,
            "Brugge" : 8000,
            "Gent" : 9000
            }
        d2 = dict_inverse(d)

        self.assertEqual(len(d2), 3)
        self.assertEqual(len(d2[8400]), 3)
        for city in ("Oostende", "Stene", "Zandvoorde"):
            self.assertTrue(city in d2[8400])

        self.assertEqual(d2[8000], ["Brugge"])
        self.assertEqual(d2[9000], ["Gent"])

unittest.main()

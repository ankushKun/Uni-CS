
class Dadaji:
    def kiski_jameen(self):
        print("Dadaji ki jameen")

class Pitaji(Dadaji):
    def ghar_me(self, s):
        print("Parents ke ghar me ",s)

class Mataji:
    def khana_khilao(self):
        print("ok khiladiya")

class Baccha(Pitaji, Mataji):
    def play(self):
        print("Baccha khel raha hai")

b = Baccha()

b.kiski_jameen()
b.play()
b.ghar_me("badmosi kar raha hai")

b.khana_khilao()

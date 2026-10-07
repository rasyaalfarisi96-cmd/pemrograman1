harga_sepatu_a = 400000
harga_sepatu_b = 350000

diskon_a = 13
diskon_b = 21

harga_akhir_a = harga_sepatu_a - (harga_sepatu_a * diskon_a / 100)
harga_akhir_b = harga_sepatu_b - (harga_sepatu_b * diskon_b / 100)

print(f"Harga sepatu A adalah {harga_sepatu_a}")
print(f"Harga sepatu B adalah {harga_sepatu_b}")
print(f"Sepatu A mendapat diskon {diskon_a}% sehingga harganya menjadi {int(harga_akhir_a)}")
print(f"Sepatu B mendapat diskon {diskon_b}% sehingga harganya menjadi {int(harga_akhir_b)}")
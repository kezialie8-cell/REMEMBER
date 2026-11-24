stok = 65
budget = 12000000
print("================================")
print("||  APLIKASI REMEMBER X-PPLG  ||")
print("================================")
print("1. melihat persediaan stok")
print("2. melihat jumlah budget")
print("3. restok")
print("4. menambah stok")
print("5. mengurangi stok")
print("6. menghitung rata-rata pendapatan")
print("7. membeli stok")
print("8. menambah budget")
print("9. matikan aplikasi")

pilihan = int(input("masukan pilihan anda: "))

if pilihan == 1:
    print(f"Persediaan stok ada: {stok}")
elif pilihan == 2:
    print(f"Budget tersedia: {budget}")
elif pilihan == 3:
    box = int(input("Masukan jumlah box: "))
    jumlah = int(input("Masukan jumlah item per box: "))
    total1 = (box * jumlah) + stok
    print(f"Stok setelah restok adalah: {total1}")
elif pilihan == 4:
    jumlah = int(input("masukan jumlah stok yang ingin ditambah: "))
    tambah = jumlah + stok
    print(f"Stok setelah ditambah adalah: {tambah}")
elif pilihan == 5:
    jumlah = int(input("masukan jumlah stok yang ingin dikurangi: "))
    kurang = stok - jumlah
    print(f"Stok setelah dikurangi adalah: {kurang}")
elif pilihan == 6:
    jumlah = int(input("Masukan jumlah didapat bulan ini: "))
    box = int(input("Masukan jumlah hari buka: "))
    if box == 0:
        print("Jumlah hari buka tidak boleh nol.")
    else:
        bagi = jumlah // box  
        print(f"Rata-rata pendapatan adalah: {bagi}")
elif pilihan == 7:
    box = int(input("Masukan jumlah stok yang mau dibeli: "))
    jumlah = int(input("Masukan harga stok: "))
    total2 = budget - (box * jumlah % budget)
    print(f"Sisa budget setelah membeli stok adalah: {total2}")
elif pilihan == 8:
    jumlah = int(input("masukan jumlah budget yang ingin ditambah: "))
    tambah = jumlah + budget
    print(f"Budget setelah ditambah adalah: {tambah}")
elif pilihan == 9:
    print("// TERIMA KASIH //")
else:
    print("Pilihan tidak valid.")
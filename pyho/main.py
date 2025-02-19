import tkinter as tk
from tkinter import messagebox
import random

# 음료 데이터 준비
drinks = [
    {"name": "콜라", "price": 1200, "image": "pepsi.gif"},
    {"name": "사이다", "price": 1100, "image": "cidar.gif"},
    {"name": "커피", "price": 1500, "image": "demisoda.gif"},
    {"name": "주스", "price": 1300, "image": "juice.gif"},
    {"name": "물", "price": 800, "image": "water.gif"},
    {"name": "에너지 드링크", "price": 2000, "image": "energy.gif"},
    {"name": "우유", "price": 1000, "image": "milk.gif"},
    {"name": "녹차", "price": 900, "image": "greentea.gif"},
    {"name": "초코우유", "price": 1100, "image": "choco.gif"},
    {"name": "홍차", "price": 1200, "image": "blacktea.gif"},
]

selected_drinks = random.sample(drinks, 6)  # 랜덤으로 6개 음료 선택
cart = []
total_price = 0

# 선택된 음료 출력
def select_drink(drink):
    global total_price
    cart.append(drink)
    total_price += drink["price"]
    print(f"선택한 음료: {drink['name']}, 가격: {drink['price']}원, 현재 총액: {total_price}원")

# 영수증 출력
def calculate_total():
    if not cart:
        messagebox.showinfo("계산", "아직 음료를 선택하지 않았습니다!")
        return
    receipt = "\n".join([f"{d['name']} - {d['price']}원" for d in cart])
    receipt += f"\n\n총 금액: {total_price}원"
    messagebox.showinfo("영수증", receipt)

# GUI 설정
root = tk.Tk()
root.title("자판기 프로그램")

# 음료 버튼 생성
for i, drink in enumerate(selected_drinks):
    image = tk.PhotoImage(file=drink["image"])  # 이미지 로드
    btn = tk.Button(root, image=image, command=lambda d=drink: select_drink(d))
    btn.image = image  # 이미지 참조 유지
    btn.grid(row=i//3, column=i%3, padx=10, pady=10)

# 계산하기 버튼
calc_btn = tk.Button(root, text="계산하기", command=calculate_total, bg="yellow", font=("Arial", 14))
calc_btn.grid(row=2, column=1, pady=20)

root.mainloop()

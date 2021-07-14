import re

f2 = open('new.csv', 'w')
with open('./data/Wiki-Vote.txt', 'r') as f1:
    for i in f1:
        line = re.split('\s+', i) #将字符串i以全部空白字符为分割符，将其分割成一个字符列表
        new_line = ','.join(line) # 将字符列表用','拼接成一个新字符串
        new_line = new_line.strip(',') # 将新字符串尾部产生的','去掉
        print(new_line)
        f2.write(new_line)
f2.close()
'''
@Description: 
@Author: 陈十一
@Date: 2020-06-28 10:07:27
@LastEditTime: 2020-06-28 10:58:23
@LastEditors: 陈十一
'''

print("请按行输入，按CTRL+Z后回车结束")

# lines 数组按行存储输入
lines=[]
while True:
    try:
        lines.append(input())
    except:
        break

if len(lines) % 2 == 1:
  print("请按正确格式输入！")
else:
  # 按行遍历
  for i in range(len(lines)):
    # 偶数行为类型名称
    if i % 2 == 0:
      # 类名首字母大写，下划线后大写
      if lines[i] == "class":
        lines[i+1] = lines[i+1].capitalize()
        # 下划线后大写
        dashIndex = lines[i+1].find('_',1)
        if dashIndex > -1:
          lines[i+1] = lines[i+1].replace(lines[i+1][dashIndex+1], lines[i+1][dashIndex+1].upper())
      # 函数名和变量名全部小写，下划线后大写
      elif lines[i] == "function" or lines[i] == "variable":
        lines[i+1] = lines[i+1].lower()
        # 下划线后大写
        dashIndex = lines[i+1].find('_',1)
        if dashIndex > -1:
          lines[i+1] = lines[i+1].replace(lines[i+1][dashIndex+1], lines[i+1][dashIndex+1].upper())
      else:
        print("输入有误，请检查！")
    # 奇数行不作处理，因为上面已经处理过了，只需打印
    else:
      print(lines[i-1], ":", lines[i])

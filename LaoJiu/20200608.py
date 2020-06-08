'''
@Description: 
@Author: 陈十一
@Date: 2020-06-08 10:07:02
@LastEditTime: 2020-06-08 10:17:41
@LastEditors: 陈十一
'''
import re

pwd = input("请输入你的密码：\n")

if len(pwd) < 8 or len(pwd) > 16:
  print("密码长度需要在8-16之间！\n")
elif not pwd.istitle(): 
  print("开头必须为大写字母!\n")
elif re.match("^(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).*$",pwd)==None:
  print("至少包含一个小写字母，一个数字，一个特殊符号！\n")
else:
  print("true")

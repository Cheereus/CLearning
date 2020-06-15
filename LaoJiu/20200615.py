'''
@Description: 
@Author: 陈十一
@Date: 2020-06-15 09:45:09
@LastEditTime: 2020-06-15 10:17:16
@LastEditors: 陈十一
'''
import types

def poly(a,b=None):
  # 判断第一个参数是否为字符串
  if type(a) == type('a'):
    # 如果存在第二个参数且第二个参数为数字
    if b and type(b) == type(1):
      print(a[0:b])
      return a[0:b]
    # 如果不存在第二个参数
    elif not b:
      print(a[0:3])
      return a[0:3]
    # 如果第二个参数类型不是数字
    elif not type(b) == type(1):
      print("参数错误！")
      return 1
  # 如果两个参数都为数字
  elif type(a) == type(1) and type(b) == type(1):
    print(pow(a,b))
    return pow(a,b)
  else:
    print("参数错误")
    return 1

poly("abcdefg")   
poly("abcdefg",1)   
poly(4,2)
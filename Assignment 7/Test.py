'''
Created on 2019/5/2

@author: misclicked
'''
import MyLib.FileDiff as FD
print('first')
FD.FileDiff('New.txt', 'Old.txt')
print('second')
FD.FileDiff('Old.txt', 'VeryOld.txt')
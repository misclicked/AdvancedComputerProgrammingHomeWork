'''
Created on 2019/5/9

@author: misclicked
'''
def FileDiff(pathNew, pathOld):
    fNew = open(pathNew,'r+',encoding='utf-8')
    fOld = open(pathOld,'r+',encoding='utf-8')
    linesNew = fNew.readlines()
    linesOld = fOld.readlines()
    diffs = [idx for idx,val in enumerate(linesNew) if val != linesOld[idx]]
    if len(diffs) == 0:
        print('Identical files!')
    else:
        for idx in diffs:
            linesNew[idx] = linesNew[idx].upper()
        f = open('differences.txt','w+',encoding='utf-8')
        f.writelines(linesNew)

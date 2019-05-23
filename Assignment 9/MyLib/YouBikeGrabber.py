# coding=cp950
import MyLib.WebFunction as wf
import re

def printNTYouBike():
    urlXML = 'https://data.ntpc.gov.tw/od/data/api/54DDDC93-589C-4858-9C95-18B2046CC1FC?$format=xml'
    data = wf.GetWebsiteHtml(urlXML)
    snas = re.findall('sarea>.*<', data)
    stot = re.findall('tot>.*<', data)
    gData = list(zip(snas,stot))
    Dict = {}
    for name, tot in gData:
        try:
            _name = name[6:-1]
            _tot = int(tot[4:-1])
            if _name not in Dict:
                Dict[_name] = _tot
            else:
                Dict[_name] += _tot  
        except:
            continue
    items = list(Dict.items())
    items.sort(key=lambda x:x[1])
    for key,value in items:
        print(f"{key} {value}")